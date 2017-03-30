#include "myheader.h"

void PrintReportToFile(ofstream &oFile,string userName, string name[],
		int id[], float balance[], int index)
{
//	oFile << "ID" << setw(3) << "#" << setw(6) << "NAME" << setw(25);
//	oFile<< "BALANCE DUE" << endl;
//	oFile << "----" << "     "  << "--------------------" << setw(25)
//	<< "-----------" << endl;

	oFile << left << setw(9);
	oFile << id[index]<< setw(25);
	oFile << name[index] << "$" << right << setw(10)
	<< fixed << setprecision(2) << balance[index] << endl;

}
