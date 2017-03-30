#include "Employee.h"

Employee::~Employee()
{
}

void Employee::insertItem(int id, string name)
{
	ListNode *newNode;
	ListNode *nodePtr;

	newNode = new ListNode;
	newNode->id = id;
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


void Employee::deleteItem(int id)
{
	ListNode *nodePtr; 
	ListNode *previousNode = nullptr;

	//If the list is empty do nothing
	if (!head)
		return;	

	if (head->id == id)
	{
		nodePtr = head->next;
		delete head;
		head = nodePtr;
	}

	else
	{
		//Initialize nodePtr to head of list

		nodePtr = head;

		while (nodePtr != nullptr && nodePtr->id != id)
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

void Employee::displayList() const
{
	ListNode *nodePtr;
	int location = 0;

	nodePtr = head;


	cout << "LIST OF EMPLOYEES" << endl << endl;
	cout << setw(10) << "ID" << setw(23) << "NAME" << endl;
	cout << "----------------------------------------------------" << endl;

	while (nodePtr)
	{
		location++;
		cout << location << left << setw(7) << ".)" << nodePtr->id << right << setw(7) << "-" << left << setw(7) << "-" << nodePtr->name << endl;

		nodePtr = nodePtr->next;
	}
}
