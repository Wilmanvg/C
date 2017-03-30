#include "myheader.h"

void PrintHeaderToFile(ofstream &oFile)
{
	oFile << left;
	oFile << "**************************************************";
	oFile << "\n* PROGRAMMED BY : " << "Wilman Garcia";
	oFile << "\n* " << setw(14) << "CLASS" << ": " << "CSC5";
	oFile << "\n* " << setw(14) << "SECTION" << ": " << "TTh 6PM - 9:10PM";
	oFile << "\n* " << setw(14) << "ASSIGNMENT #3" << ": " << "Functions";
	oFile << "\n**************************************************\n\n";
	oFile << right;

}
