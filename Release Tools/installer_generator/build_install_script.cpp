#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>
#include <fstream>

int main(int argc, char ** argv)

{
	const char* version = "nightly";
	std::ifstream fin("installer_template.nsi");
	if (!fin.good()) {

		std::cout << "installer_template.nsi not found";
		return 0;
	}
	std::ofstream fout("installer.nsi");
	if (!fout.good()) {
		std::cout << "Can\'t open installer.nsi for writing";
		return 0;
	}
	std::string line;

	while(std::getline(fin, line))
	{
		const int pos = line.find("${VERSION}");

		if(pos != -1)
			line.replace(pos, strlen("${VERSION}"), argc > 1 ? argv[1] : version);

		fout << line << "\n";
	}
	fin.close();
	fout.close();
}
