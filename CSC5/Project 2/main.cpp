/*************************************************************************
 *
 * COMPUTE GRADE POINT AVERAGE
 * _______________________________________________________________________
 * This program accepts as user input A, B, C, D, F, or X.
 * The case of the letters do not matter. The program will
 * execute three times prompting the user for their letter
 * grades and then display the computed grade points and
 * grade point average for the given input values.
 *
 *
 * Computations are based on the the formula
 * gradePointAverage = gradePoints / gradeCount
 * _______________________________________________________________________
 * INPUT
 *  count				: Counts the amount of times the program has run
 *  inputGrade			: The users inputed grade
 *
 * OUTPUT
 * 	gradeCount			: The amount of classes the user has entered
 * 	gradePoints			: The amount of points the user has accumulated
 * 	gradePointAVERAGE	: The users calculated grade point average
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
	 * A_POINTS		: The value of an A
	 * B_POINTS		: The value of a B
	 * C_POINTS		: The value of a C
	 * D_POINTS		: The value of a D
	 * F_POINTS		: The value of a F
	 *
	 * PROGRAMMER	: Programmer's Name
	 * CLASS		: Studnent's Course
	 * SECTION		: Class Days and Time
	 * AS_NUM		: Assignment number
	 * AS_NAME		: Assignment name
	 **************************************************************/

	const int A_POINTS = 4;
	const int B_POINTS = 3;
	const int C_POINTS = 2;
	const int D_POINTS = 1;
	const int F_POINTS = 0;

	const char PROGRAMMER[30] = "Wilman Garcia";
	const char CLASS[5] = "CSC5";
	const char SECTION[25] = "TTh 6PM - 9:10PM";
	const char AS_NUM[30] = "ASSIGNMENT #2";
	const char AS_NAME[40] = "Repetition & Switch Statement";

	char inputGrade;			// INPUT - Grade selection
	float gradeCount;			// INPUT - Accumulator
	int gradePoints;			// OUTPUT- Run time total
	float gradePointAverage;	// OUTPUT- Displays GPA
	int count;					// CALC - Counter for loop

		//PROGRAMMER HEADER
	cout << left;
	cout << "**************************************************";
	cout << "\n* PROGRAMMED BY : " << PROGRAMMER;
	cout << "\n* " << setw(14) << "CLASS" << ": " << CLASS;
	cout << "\n* " << setw(14) << "SECTION" << ": " << SECTION;
	cout << "\n* " << setw(14) << AS_NUM << ": " << AS_NAME;
	cout << "\n**************************************************\n\n";
	cout << right;

		//Formula for the loop
	for (count = 1; count <= 3; count++)
	{
		gradeCount = 0;			// Sets the Accumulator to 0
		gradePoints = 0;		// Sets the Accumulator to 0
		cout << "Test #" << count << ":" << endl << endl;	//DISPLAY TEST

		do
		{	//Prompts the user and gathers input
			cout << setw(47) << "Enter Letter Grade (enter 'X' to exit):";
			cin >> inputGrade;

			//Branches depending on user input
			switch (inputGrade)
			{
				case 'a':
				case 'A':
					gradeCount++;
					gradePoints += A_POINTS;
					break;
				case 'b':
				case 'B':
					gradeCount++;
					gradePoints += B_POINTS;
					break;
				case 'c':
				case 'C':
					gradeCount++;
					gradePoints += C_POINTS;
					break;
				case 'd':
				case 'D':
					gradeCount++;
					gradePoints += D_POINTS;
					break;
				case 'f':
				case 'F':
					gradeCount++;
					gradePoints += F_POINTS;
					break;
				case 'x':
				case 'X':

			//Displays output if gradeCount > 0
				if (gradeCount > 0)
					{
						cout << "\n" << "Total Grade Points: ";
						cout << gradePoints;
						gradePointAverage = gradePoints / gradeCount;
						cout << fixed << setprecision(2);
						cout << "\nGPA: " << gradePointAverage;
						cout <<"\n\n\n";
					}

					else
					{
						cout << endl;
					}
				break;

			//Input validation
			default:
				cout << endl;
				cout << setw(46)
				<< "Invalid letter grade, please try again";
				cout << endl << endl;
			}
		//Stops the loop when sentinel value is entered
		} while (inputGrade != 'x' && inputGrade != 'X');
	}
	return 0;
}
