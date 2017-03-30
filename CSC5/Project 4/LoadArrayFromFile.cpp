#include "myheader.h"

void LoadArrayFromFile(ifstream &iFile, EmplyeeData realOne[], const int SIZE, int &records)
{
	records = 0;
	while(!iFile.eof() && records < SIZE)
	{
		getline(iFile,realOne[records].name);
		iFile >> realOne[records].id;
		iFile >> realOne[records].balance ;
		records++;
		iFile.ignore(1000,'\n');
	}
}
