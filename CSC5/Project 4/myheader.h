/**************************************************************************
 * AUTHOR 		: Wilman Garcia 										  *
 * STUDENT ID 	: 2611300  												  *
 * LAB #1 		: Eclipse Lab 										      *
 * CLASS 		: CSC5 													  *
 * SECTION 		: TTh 6PM - 9:10PM 										  *
 * DUE DATE 	: 9/3/2015 										 		  *
 *************************************************************************/
/*************************************************************************
 *
 * LOAD FILE AND SEARCH FOR MATCH
 * _______________________________________________________________________
 * This program prompts the user to name a input file and an output file
 * This program opens a file  and uses a function to read and store the
 * file. The user is then prompted who they are searching for. The
 * program then searches through the loaded information and sees if there
 * is a match and displays whether or not there is a match. The program
 * then takes the match info and sends it to a seperate file with all of
 * the match
 * Computations are based on the formula
 * total = preSales - discount + salesTax + shipping
 *________________________________________________________________________
 * INPUT
 * 	acctNum			: The users account number
 * 	month			: The month of the sale
 * 	day				: The day of the sale
 * 	year			: The year of the sale
 * 	county			: The users county code
 * 	preSales		: The users sales total before tax
 * 	weight			: The weight of the users catalog order.
 *
 * OUTPUT
 * 	discount		: The discount the user receives
 * 	label			: The label for  the users county code
 * 	shipping		: The final cost of shipping
 * 	total			: The users final total
 * **********************************************************************
 * CONSTANTS
 * SIZE				: Size of the array
 ************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

struct EmplyeeData
{
	string name;
	int id;
	float balance;
};

/*************************************************************************
 * PrintHeaderToFile
 * This  function prints the class header to the output
 *
 ************************************************************************/
void PrintHeaderToFile(ofstream &oFile);

/*************************************************************************
 * LoadArraysFromFile
 * This function opens a file and reads it and stores the contents into
 * their respective arrays.
 ************************************************************************/
void LoadArrayFromFile(	ifstream &iFile,
						EmplyeeData realOne[],
						const int size,
						int &records
						);

/*************************************************************************
 * SearchForMatch
 * This function takes the users inputted name and searches for a match
 * within the loaded array
 ************************************************************************/
int SearchForMatch(string userName, string name[], int id[],
		float balance[], int records);

/*************************************************************************
 * PrintReportToFile
 * This function prints the data of the matched users to an outpute file
 * that the user names.
 ***********************************************************************/
void PrintReportToFile(ofstream &oFile, string userName, string name[],
		int id[], float balance[], int index);
