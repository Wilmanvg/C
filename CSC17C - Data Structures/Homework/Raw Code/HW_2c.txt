//Attached: HW_2a, 2b, 2c
//==================================================
//Project: HW_2c.cpp
//==================================================
//Programmer: Wilman Garcia
//Class: CIS 17C
//==================================================

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <iomanip> 
using namespace std;

//Global Constants
const int ROW = 5;
const int COL = 3;

int main()
{
	//Constants holding the point values for each grade
	const int A_POINTS = 4;
	const int B_POINTS = 3;
	const int C_POINTS = 2;
	const int D_POINTS = 1;
	const int F_POINTS = 0;
	float totalPoints = 0;

	//2D Array
	char studentGrades[ROW][COL];

	//File Opened
	ifstream data;
	data.open("grades.dat");

	//Display Header
	cout << "Student" << setw(12) << "English" << setw(11) << "History" << setw(8) << "Math" << endl;

	//Read data from file
	for (int i = 0; i < ROW; i++)
	{	
		cout << "#" << (i + 1);


		for (int z = 0; z < COL; z++)
		{
			data >> studentGrades[i][z];
			cout << setw(11) << studentGrades[i][z];
		}
		cout << endl;
	}
	data.close();	//Close file
	cout << endl << "Student GPAs" << endl;
	cout << "Student" << endl;
	
	//Calculate and display each students gpa
	for (int i = 0; i < ROW; i++)
	{
		for (int z = 0; z < COL; z++)
		{
			switch ((studentGrades[i][z]))
			{
			case 'A': totalPoints += A_POINTS;
				break;
			case 'B': totalPoints += B_POINTS;
				break;
			case 'C': totalPoints += C_POINTS;
				break;
			case 'D': totalPoints += D_POINTS;
				break;
			case 'F': totalPoints += F_POINTS;
				break;
			}
		}

		cout << "#" << (i + 1) << setw(11) << fixed << setprecision(2) << (totalPoints / 3) << endl;
		totalPoints = 0;
	}

	cout << endl << "Average GPA by Subject" << endl;
	cout << "English" << setw(10) << "History" << setw(7) << "Math" << endl;
	totalPoints = 0;

	//Calculate and display Average English GPA
	for (int i = 0; i < ROW; i++)
	{
		for (int z = 0; z < 1; z++)
		{
			switch ((studentGrades[i][z]))
			{
			case 'A': totalPoints += A_POINTS;
				break;
			case 'B': totalPoints += B_POINTS;
				break;
			case 'C': totalPoints += C_POINTS;
				break;
			case 'D': totalPoints += D_POINTS;
				break;
			case 'F': totalPoints += F_POINTS;
				break;
			}
		}
	}

	cout << (totalPoints / 5);
	totalPoints = 0;

	//Calculate and display Avergage History GPA
	for (int i = 0; i < ROW; i++)
	{
		for (int z = 1; z < 2; z++)
		{
			switch ((studentGrades[i][z]))
			{
			case 'A': totalPoints += A_POINTS;
				break;
			case 'B': totalPoints += B_POINTS;
				break;
			case 'C': totalPoints += C_POINTS;
				break;
			case 'D': totalPoints += D_POINTS;
				break;
			case 'F': totalPoints += F_POINTS;
				break;
			}
		}
	}

	cout << setw(10) << (totalPoints / 5);
	totalPoints = 0;

	//Calculate and Display Average Math GPA
	for (int i = 0; i < ROW; i++)
	{
		for (int z = 2; z < 3; z++)
		{
			switch ((studentGrades[i][z]))
			{
			case 'A': totalPoints += A_POINTS;
				break;
			case 'B': totalPoints += B_POINTS;
				break;
			case 'C': totalPoints += C_POINTS;
				break;
			case 'D': totalPoints += D_POINTS;
				break;
			case 'F': totalPoints += F_POINTS;
				break;
			}
		}
	}

	cout << setw(10) << (totalPoints / 5) << endl;;
	totalPoints = 0;
	return 0;
}
//==================================================

/*OUTPUT:

Student     English    History    Math
#1          A          A          B
#2          C          C          F
#3          C          D          B
#4          B          A          C
#5          B          A          B

Student GPAs
Student
#1       3.67
#2       1.33
#3       2.00
#4       3.00
#5       3.33

Average GPA by Subject
English   History   Math
2.80      3.00      2.20
Press any key to continue . . .*/
//==================================================