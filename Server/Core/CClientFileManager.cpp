//============== IV:Multiplayer - https://github.com/Neproify/ivmultiplayer ==============
//
// File: CClientFileManager.cpp
// Project: Server.Core
// Author(s): mabako
//            jenksta
// License: See LICENSE in root directory
//
//==============================================================================

#include "CClientFileManager.h"
#include "CNetworkManager.h"
#include "CWebserver.h"
#include <map>
#include <CLogFile.h>

extern CNetworkManager	* g_pNetworkManager;
extern CWebServer		* g_pWebserver;
extern CServer			* g_pServer;

CClientFileManager::CClientFileManager(bool bScriptManager)
{
	bIsScriptManager = bScriptManager;
}

bool CClientFileManager::Start(String strName)
{
	if(Exists(strName))
		return false;

	CFileChecksum fileChecksum;
	
	if(!g_pWebserver->FileCopy(strName, bIsScriptManager, fileChecksum))
	{
		CLogFile::Printf("Failed to copy client file %s to web server.\n", strName.Get());
		return false;
	}

	insert(std::pair<String, CFileChecksum>(strName, fileChecksum));
	CBitStream bsSend;
	bsSend.Write(bIsScriptManager);
	bsSend.Write(strName);
	bsSend.Write((char *)&fileChecksum, sizeof(CFileChecksum));
	g_pNetworkManager->RPC(RPC_NewFile, &bsSend, PRIORITY_HIGH, RELIABILITY_RELIABLE_ORDERED, INVALID_ENTITY_ID, true);
	return true;
}

bool CClientFileManager::Stop(String strName)
{
	for(iterator iter = begin(); iter != end(); ++ iter)
	{
		if((*iter).first == strName)
		{
			// If server isn't active don't delete file - client will do it itself
			if(g_pServer->IsActive())
			{
				CBitStream bsSend;
				bsSend.Write(bIsScriptManager);
				bsSend.Write(strName);
				g_pNetworkManager->RPC(RPC_DeleteFile, &bsSend, PRIORITY_HIGH, RELIABILITY_RELIABLE_ORDERED, INVALID_ENTITY_ID, true);
			}
			erase(iter);
			return true;
		}
	}
	return false;
}

bool CClientFileManager::Restart(String strName)
{
	if(!Exists(strName))
		return false;

	Stop(strName);
	
	return Start(strName);
}

bool CClientFileManager::Exists(String strName)
{
	for(iterator iter = begin(); iter != end(); ++ iter)
	{
		if((*iter).first == strName)
			return true;
	}

	return false;
}

void CClientFileManager::HandleClientJoin(EntityId playerId)
{
	CBitStream bsSend;

	for(iterator iter = begin(); iter != end(); ++ iter)
	{
		// Write if the file is a script or resource
		bsSend.Write(bIsScriptManager);

		// Write the file name
		bsSend.Write((*iter).first);

		// Write the file checksum
		bsSend.Write((char *)&((*iter).second), sizeof(CFileChecksum));
	}

	// Send the rpc
	g_pNetworkManager->RPC(RPC_NewFile, &bsSend, PRIORITY_HIGH, RELIABILITY_RELIABLE_ORDERED, playerId, false);
}
