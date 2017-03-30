//Attached: HW_4a, HW_4b
//==================================================
//Project: HW_4b
//==================================================
//Programmer: Wilman Garcia
//Class: CIS 17C
//Instructor: Dennis Rainey
//
//Description:
//	This program uses a class to create a link lis tof employees. The user is promopted to enter empoloyee id's and employee names
//	that are then passed to the insert item method in the Employee class which adds the value to the list. The user is then asked if they
//	would like to display the list and tehn they are asked if they would like to delete an employee off of the list.
//
//	The formatting of the list done so that the the standart ID Number is 7 digits long.
//	I.E. 2611300
//==================================================

#include "Employee.h"

int main()
{
	Employee list;
	int userNum;
	string userName;
	char choice;

	do {
		cout << "Enter an employee id (0 to quit): ";
		cin >> userNum;
		cin.ignore();
		if (userNum != 0)
		{
			cout << "Enter an employee name (*to quit): ";
			getline(cin, userName);
		}
		if (userNum != 0 && userName != "*")
		{
			list.insertItem(userNum, userName);
		}

	} while (userNum != 0 && userName != "*");
	cout << "Would you like to display the Employee list? (Y/N): ";
	cin >> choice;
	system("CLS");

	if (toupper(choice) == 'Y')
	{
		list.displayList();
	}

	cout << "Would you like to delete an employee from the lisT? (Y/N): ";
	cin >> choice;

	if (toupper(choice) == 'Y')
	{
		cout << "Enter the id number of who you would like to delete: ";
		cin >> userNum;
		list.deleteItem(userNum);
		cout << "Here is the new list of employees: " << endl << endl;
		list.displayList();
	}
}