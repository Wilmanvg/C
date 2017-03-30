//Attached: HW_2a, 2b, 2c
//==================================================
//Project: HW_2a.cpp
//==================================================
//Programmer: Wilman Garcia
//Class: CIS 17C
//==================================================

#include "stdafx.h"
#include <iostream>
#include <cstdlib>		//For screen clear
#include <iomanip>
using namespace std;

//Function prototypes
void getScores(double[], int);
void showMenu();
char getChoice();
void displayResult(char, double[],int);

int main()
{
	const int SIZE = 5;							//Array Size		
	double testScores[SIZE];					//Array

	getScores(testScores, SIZE);				//Function Call
	system("CLS");								//Screen clear
	showMenu();									//Function call
	char choice = getChoice();					//Function Call
	system("CLS");								//Screen clear
	displayResult(choice, testScores, SIZE);	//Function Call to Display Rersults

    return 0;
}

//Function Definitions
void getScores(double testScores[], int SIZE)
{
	cout << "Enter 5 testscores:" << endl;
	for(int i = 0; i < SIZE; i++)
	{
		cin >> testScores[i];
	}
}

void showMenu()
{
	cout << "A.) Calculate the average of the test scores." << endl;
	cout << "B.) Display all test scores" << endl;
}

char getChoice()
{
	char choice; 
	cout << "Enter your choice: ";
	cin >> choice;

	return toupper(choice);
}

void displayResult(char choice, double testScores[], int SIZE)
{
	double average;
	double totalScores = 0;

	switch (choice)
	{
	case 'A':
		for (int i = 0; i < SIZE; i++)
		{
			totalScores += testScores[i];
		}

		 average = totalScores / SIZE;

		cout << "The average is " << fixed << setprecision(2) << average << endl;
		break;

	case 'B':
		cout << "Here are your scores:" << endl;
		for (int i = 0; i < SIZE; i++)
		{
			cout << testScores[i] << endl;
		}
		break;

	default: cout << "Invalid Entry" << endl;

	}
}

//==================================================

/*OUTPUT:

Enter 5 testscores:
99
77
86
59
92

---- screen clears ----

A.) Calculate the average of the test scores.
B.) Display all test scores
Enter your choice: A

---- screen clears ----

The average is 82.60
Press any key to continue . . .*/
//==================================================
