//Attached: HW_4a, HW_4b
//==================================================
//Project: HW_4a.cpp
//==================================================
//Programmer: Wilman Garcia
//Class: CIS 17C
//Instructor: Dennis Rainey
//
//Description:
//	This progrmam uses a whie loop to creat a linked list of dog objects. The user is prompted to enter a dog namme and if they wish to quit
//	they are told they can enter *. Once the user has entered a dog name the dog name is then passed to the insertDog function and added to 
//	front of the link lsit. Once the user is done entering names they arre prompted with whether or not they want to display the list ther list
//	they just created.If the user enters 'Y' the program calls the displayAllNodes functioin that uses a while loop to display the link list.
//	After the link list is displayed the user is prompted to enter a name they would like to search for, the program uses a while loop to search
//	for that name in the link list, if the name is found the program outputs that the name has been found, if not found the user is notified that
//	name does not exist in the link list.
//==================================================
#include "Dog.h"

void insertDog(Dog*& head,string name);
void displayAllNodes(Dog*& head);
void searchList(Dog*& head);
//==================================================
int main()
{
	Dog* head = NULL;
	string name;
	char choice;
	int amount = 0;

	cout << "Enter a dog name (* to quit): " << endl;

	do
	{
		getline(cin,name);

		if (name != "*")
		{
			insertDog(head, name);
			amount++;
		}
	} while (name != "*");

	if (amount >= 1)
	{
		cout << "\nDisplay the list (Y/N)? ";
		cin >> choice;
		system("CLS");

		if (toupper(choice) == 'Y')
		{
			displayAllNodes(head);
		}

		//system("CLS");
		searchList(head);
	}
}
//==================================================

void insertDog(Dog*& head, string name)
{

	Dog *temp = new Dog;
	temp->name = name;
	temp->next = head;
	head = temp;
}
//==================================================

void displayAllNodes(Dog*& head)
{
	Dog* temp = head;
	int location = 0;
	
	cout << "LIST OF DOGS" << endl << endl;
	cout << setw(12) << "NAME" << endl;
	cout << "--------------------------" << endl;

	while (temp != NULL)
	{
		location++;
		cout << location << left << setw(7) << ".)" << temp->name << endl;

		temp = temp->next;
	}
}
//==================================================
void searchList(Dog*& head)
{
	Dog* temp = head;
	cin.ignore();
	string name;
	cout << endl << "Please enter a dog name to search for: ";
	getline(cin, name);
	bool found = false;

	while (temp != NULL)
	{
		if (temp->name == name)
		{
			cout << name << " has been found" << endl;
			found = true;
		}
		temp = temp->next;
	}

	if (found == false)
	{
		cout << name << " was not found" << endl;
	}
}
//==================================================