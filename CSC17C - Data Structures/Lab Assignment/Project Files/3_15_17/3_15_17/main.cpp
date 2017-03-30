#include "Employee.h"

void insert(Employee*& head);

void deleteNode(Employee*& head);

void displayLtoR(Employee*& head);

 void displayRtoL(Employee*& head);

int main()

{

	Employee *head = NULL;

	char answer = 'Y';

	int choice = 0;

	do {

		cout << "1.) Insert\n"

			<< "2.) Delete\n"

			<< "3.) Display Left to Right\n"

			<< "4.) Display Right to Left\n"

			<< "5.) Exit\n";;

		cout << "Enter your choice: ";

		cin >> choice;

		switch (choice)

		{

		case 1: insert(head);

			break;

		case 2: deleteNode(head);

			break;

			case 3: displayLtoR(head);

			 break;

			case 4: displayRtoL(head);

			break;

		case 5: exit(0);

		default: cout << "\nInvalid Entry!\n\n";

			break;

		}

	} while (choice != 5);

	return 0;

}

// ==== insert =========================================

void insert(Employee *&head)

{

	Employee * temp = new Employee;

	cout << "\nID: ";

	cin >> temp->id;

	cout << "NAME: ";

	cin.ignore();

	getline(cin, temp->name);

	temp->next = head;

	temp->back = NULL; // for inserting the first node

	if (head != NULL)

	{

		head->back = temp;

	}

	head = temp;

	cout << endl;

}

// =====================================================

// ==== deleteNode =====================================

void deleteNode(Employee *&head)

{

	Employee *location;

	Employee *place;

	int idNum;

	// Front one

	location = place = head;

	cout << "\nEnter ID to delete: ";

	cin >> idNum;

	while ((location->id != idNum) && (location->next != NULL))

	{

		place = location;

		location = location->next;

	}

	if ((location->id != idNum) && (location->next == NULL))

		cout << "\nNot int the list.\n";

	// In case deleting last node in list

	else if ((location->id == idNum) && (location->next == NULL))

	{

		place->next = NULL;

		delete location;

	}

	// In case deleting first node in list

	else if ((location->id == idNum) && (location->back == NULL))

	{

		head = head->next;

		head->back = NULL;

		delete location;

	}

	// In case deleting a node other than first or last

	else

	{

		place->next = location->next;

		location->next->back = place;

		delete location;

	}

}

// =====================================================
// ==== displayLtoR ====================================

void displayLtoR(Employee *&head)

{

	Employee *nodePtr;
	int location = 0;

	nodePtr = head;

	while (nodePtr)
	{
		location++;
		cout << location << left << setw(7) << ".)" << nodePtr->id << right << setw(7) << "-" << left << setw(7) << "-" << nodePtr->name << endl;

		nodePtr = nodePtr->next;
	}
} 

// =====================================================



// ==== displayRtoL ====================================

void displayRtoL(Employee *&head)

{
	Employee *current, *prev, *next;
	current = head;
	prev = NULL;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;

	Employee *nodePtr;
	int location = 0;

	nodePtr = head;

	while (nodePtr)
	{
		location++;
		cout << location << left << setw(7) << ".)" << nodePtr->id << right << setw(7) << "-" << left << setw(7) << "-" << nodePtr->name << endl;

		nodePtr = nodePtr->next;
	}


	current = head;
	prev = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
}
