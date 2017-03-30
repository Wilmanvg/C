//Attached: HW_2a, 2b, 2c
//==================================================
//Project: HW_2b.cpp
//==================================================
//Programmer: Wilman Garcia
//Class: CIS 17C
//==================================================

#include "stdafx.h"
#include "cstdlib"
#include <iostream> 
#include <iomanip>
using namespace std;

//Global Constants
const int ROW = 3;			//Size of row
const int COL = 4;			//Size of column

//Function Prototypes
void getData(int[][COL], int);
void displayData(int[][COL], int);

int main()
{

	int numArray[ROW][COL] = { { 0 }, { 0 } };		//Initializes a 2D Array
	getData(numArray, ROW);							//Function Call
	displayData(numArray, ROW);						//Function Call

    return 0;
}

void getData(int numArray[][COL], int ROW)
{
	//Gets the data for the 2D array
	cout << "Enter intergers into the 2-Dimensional array: " << endl << endl;
	for (int i = 0; i < ROW; i++)
	{
		for (int z = 0; z < COL; z++)
		{
			cout << "Enter a number: ";
			cin >> numArray[i][z];
		}
	}
}

void displayData(int numArray[][COL], int ROW)
{
	//Displays the 2D array
	system("CLS");	//Clears the screeen

	cout << "Here is the data in the 2-Dimensional array:" << endl << endl;

	for (int i = 0; i < ROW; i++)
	{
		for (int z = 0; z < COL; z++)
		{
			cout << setw(5) << numArray[i][z];
			if (z == 3)
			{
				cout << endl;
			}
		}
	}

	cout << endl;
}
//==================================================

/*OUTPUT: 

Enter intergers into the 2-Dimensional array:

Enter a number: 1
Enter a number: 45
Enter a number: 765
Enter a number: 6
Enter a number: 32
Enter a number: 45
Enter a number: 789
Enter a number: 343
Enter a number: 22
Enter a number: 64
Enter a number: 12
Enter a number: 555

---- screen clears ----

Here is the data in the 2-Dimensional array:

    1   45  765    6
   32   45  789  343
   22   64   12  555

Press any key to continue . . .*/
//==================================================