/*************************************************************************
 *
 * COMPUTE RETROACTIVE PAY
 * _______________________________________________________________________
 * This program accepts as user input an employee
 * name, current annual salary and percent increase
 * and computes a new annual salary, new monthly
 * salary and retroactive pay due. The program will
 * execute three times prompting the user for the
 * appropriate input and then displaying the computed
 * values for the given input.
 *
 * Computations are based on the assumption that input
 * values are effective on January 1 and calculations
 * are effective for July 1.
 * _______________________________________________________________________
 * INPUT
 * 	nameFull		: Employee's full name
 * 	salaryCurrent	: Current annual salary
 * 	percent 		: Percent increase due
 *
 * 	OUTPUT
 * 	 salaryNew		: New salary after applying rate increase
 * 	 salaryMonthly	: New monthly salary
 * 	 retroactivePay	: Retroactive pay due employee
 *
 ************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	/**************************************************************
	 * CONSTANTS
	 * ------------------------------------------------------------
	 * MONTHS		: Total number of months
	 * RETRO_MONTHS	: Number of months retroactive
	 *
	 * PROGRAMMER	: Programmer's Name
	 * CLASS		: Studnent's Course
	 * SECTION		: Class Days and Time
	 * AS_NUM		: Assignment number
	 * AS_NAME		: Assignment name
	 **************************************************************/

	const int MONTHS = 12;
	const int RETRO_MONTHS = 6;

	const char PROGRAMMER[30] = "Wilman Garcia";
	const char CLASS[5] = "CSC5";
	const char SECTION[25] = "TTh 6PM - 9:10PM";
	const char AS_NUM[30] = "ASSIGNMENT #1";
	const char AS_NAME[40] = "Basic Input / Output";


	string nameFull;		// INPUT - Employee's full name
	float salaryCurrent;	// INPUT - Current annual salary
	float percentIncrease;	// INPUT - Percent increase due
	float salaryNew;		// OUTPUT - New salary after increase
	float salaryMonthly;	// OUTPUT - New monthly salary
	float retroactivePay;	// OUTPUT - Retroactive pay due employee
	int count;				// CALC - Counter for loop

		//PROGRAMMER HEADER
	cout << left;
	cout << "**************************************************";
	cout << "\n* PROGRAMMED BY : " << PROGRAMMER;
	cout << "\n* " << setw(14) << "CLASS" << ": " << CLASS;
	cout << "\n* " << setw(14) << "SECTION" << ": " << SECTION;
	cout << "\n* " << setw(14) << AS_NUM << ": " << AS_NAME;
	cout << "\n**************************************************\n\n";
	cout << right;

		// Formula for the loop
	for(count = 0; count < 3; count ++)
	{
		// Displays questions to user and takes input
		cout << left << setw(29) << "What is your name?";
		getline(cin, nameFull);
		cout << left << setw(29) << "What is your current salary?";
		cin >> salaryCurrent;
		cout << left << setw(29) << "What is your pay increase?";
		cin >> percentIncrease;
		cout << endl;

		// Calculates the new salary
		salaryNew = salaryCurrent * percentIncrease + salaryCurrent;

		// Calculates the monthly salary
		salaryMonthly = salaryNew / MONTHS;

		// Calculates the rectroactive pay
		retroactivePay = RETRO_MONTHS * ((salaryNew - salaryCurrent)
				/ MONTHS);

		// Displays the out put results header
		cout << nameFull << "'s SALARY INFORMATION\n";

		//Displays decimals in fixed point notation
		cout << setprecision(2) << fixed;

		//Displays and Formats the heading
		cout << "New Salary" << right << setw(19) << "Monthly Salary"
				<< setw(20) << "Retroactive Pay";
		cout << endl;

		//OUTPUT Results and also formats the output results
		cout << setw(10) << salaryNew << setw(19) << salaryMonthly
				<< setw(20) << retroactivePay << endl;
		cout << endl;
		cout << "<Press Enter to continue>";
		cin.get();
		cin.ignore();
		cout << endl << endl;
	}


	return 0;
}
