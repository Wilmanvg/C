//Attached: HW_3a, 3b, 3c
//==================================================
//Project: HW_3a
//==================================================
//Programmer: Wilman Garcia
//Class: CIS 17C
//=================================================

#include "UnsortedList.h"

void showMenu();
char getChoice();

int main()
{
	int value;
	char choice;
	UnsortedList list;

	do {

		showMenu();
		choice = getChoice();

		switch (toupper(choice))
		{
		case 'A':
			cout << "Enter a number: ";
			cin >> value;
			if (list.isFull())
			{
				cout << "The list is full - Cannot insert the number." << endl << endl;
			}
			else {
				list.insertItem(value);
				cout << endl;
			}
			break;

		case 'B':
			cout << "Enter a number to be deleted: ";
			cin >> value;
			if (list.isEmpty())
			{
				cout << "The list is empty" << endl;
			}
			else {
				list.deleteItem(value);
			}
			break;
		}
	} while (toupper(choice) != 'C');

	return 0;
}
//==================================================

void showMenu() {
	cout << "a. Insert a number into  the list." << endl;
	cout << "b. Delete a number from the list." << endl << endl;
}
//==================================================

char getChoice()
{
	char choice;
	cout << "Enter your choice (C to quit): ";
	cin >> choice;

	return choice;
}
//==================================================