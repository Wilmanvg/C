#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
using namespace std;

class Employee
{
private:
	struct ListNode 
	{
		int id;
		string name;
		ListNode* next;
	};

	ListNode *head;
public:
	Employee()
	{
		head = nullptr;
	}
	~Employee();

	//Linked List Operations
	void insertItem(int, string);
	void deleteItem(int);
	void displayList() const;
};

