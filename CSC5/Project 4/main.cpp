#include "myheader.h"
int main()
{
	string inFileName;			//INPUT - Users Inut file name
	string outFileName;			//INPUT - Users output file name
	const int SIZE = 100;		//INPUT - Array size
	string name[SIZE];			//INPUT - Array of names
	ifstream iFile;				//INPUT - Users input file objec
	ofstream oFile;				//OUTPUT - Output file
	int id[SIZE];				//INPUT - Array of IDs
	float balance[SIZE];		//INPUT - Array of IDs
	int records;				//INPUT - Record of how many were loaded
	string userName;			//INPUT - Name user is searchig for
	int index;					//INPUT - Array Index
	int increment = 0;			//INPUT - Accumulator
	int newBalance = 0;				//INPUT - New balance
	float average;				//OUTPUT - Outputs average

	cout << left;
	cout << "**************************************************";
	cout << "\n* PROGRAMMED BY : " << "Wilman Garcia";
	cout << "\n* " << setw(14) << "CLASS" << ": " << "CSC5";
	cout << "\n* " << setw(14) << "SECTION" << ": " << "TTh 6PM - 9:10PM";
	cout << "\n* " << setw(14) << "ASSIGNMENT #3" << ": " << "Functions";
	cout << "\n**************************************************\n\n";
	cout << right;

	//Gathers input
	cout << "What file would you like to use?";
	getline(cin,inFileName);	//Grabs entire line from user
	cout << "What output file would you like to use?";
	getline(cin,outFileName);	//Grabs entire lie from user

	iFile.open(inFileName.c_str());	//Opens input file
	//Function call
	EmplyeeData realOne[SIZE];
	LoadArrayFromFile(iFile, realOne, SIZE, records);
	iFile.close();					//Closes file

	oFile.open(outFileName.c_str());//Opens output file
	PrintHeaderToFile(oFile);		//Calls header function
	//OUTPUTS HEADER OF OUT PU FILE
	oFile << "ID" << setw(2) << "#" << setw(9) << "NAME" << setw(32);
	oFile<< "BALANCE DUE" << endl;
	oFile << "----" << "     "  << "--------------------" << setw(16)
	<< "-----------" << endl;

	while (userName != "done")				//Loop ends at sentinel value
	{
		cout << "Who would you like to search for?";	//Prompt user
		getline(cin, userName);							//Gets entire line

		if(userName != "done")	//If they have not entered done
		{
			//Function call to search for match
			index = SearchForMatch(userName, name, id, balance, records);
			if(index >= 0)	//If match is found
			{
				cout << "Found." << endl;
				PrintReportToFile(oFile,userName, name, id, balance,index);
				increment++;	//Increments accumulator
				newBalance += balance[index];
			}

			else	//If not a match
				cout << userName << " not found" << endl;


		}
	}

	average = newBalance / increment;
	oFile << endl << setw(33) << "Average Balance Due:"
	<< setw(2) << "$"<< setw(10) << fixed << setprecision(2)<<
	average;

	oFile.close();	//Closes file
	return 0;
}

