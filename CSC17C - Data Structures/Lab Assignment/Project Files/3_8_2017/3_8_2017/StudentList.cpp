#include "StudentList.h"



StudentList::StudentList()
{
}


StudentList::~StudentList()
{
}

void StudentList::appendStudent(int id, string name)
{
}

void StudentList::insertStudent(int id, string name)
{
	Student *newNode;
	Student *nodePtr;

	newNode = new Student;
	newNode->idNum = id;
	newNode->name = name;
	newNode->next = nullptr;

	if (!head)
		head = newNode;
	else
	{
		nodePtr = head;

		while (nodePtr->next)
			nodePtr = nodePtr->next;

		nodePtr->next = newNode;
	}

}

void StudentList::deleteStudent(int id, string name)
{
	Student *nodePtr;
	Student *previousNode = nullptr;

	//If the list is empty do nothing
	if (!head)
		return;

	if (head->idNum == id)
	{
		nodePtr = head->next;
		delete head;
		head = nodePtr;
	}

	else
	{
		//Initialize nodePtr to head of list

		nodePtr = head;

		while (nodePtr != nullptr && nodePtr->idNum != id)
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}

		/*If nodePtr is not at the end of the list, link the previous node to the node after nodePtr, then delete nodePtr*/
		if (nodePtr)
		{
			previousNode->next = nodePtr->next;
			delete nodePtr;
		}
	}
}

void StudentList::displayList()
{
	Student *nodePtr;
	int location = 0;

	nodePtr = head;


	cout << "LIST OF STUDENTS" << endl << endl;
	cout << setw(10) << "ID" << setw(23) << "NAME" << endl;
	cout << "----------------------------------------------------" << endl;

	while (nodePtr)
	{
		location++;
		cout << location << left << setw(7) << ".)" << nodePtr->idNum << right << setw(7) << "-" << left << setw(7) << "-" << nodePtr->name << endl;

		nodePtr = nodePtr->next;
	}
}
