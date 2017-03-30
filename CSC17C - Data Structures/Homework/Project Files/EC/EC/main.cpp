//Attached: Extra Credit (Reversed Linklist)
//==================================================
//Project: main.cpp
//==================================================
//Programmer: Wilman Garcia
//Class: CIS 17C
//==================================================

#include "Book.h"

void insertBook(Book*& head);
void displayList(Book*& head);
Book* reverse(Book*& head);

int main()
{
	char answer;
	Book* head = NULL;

	do {
		insertBook(head);

		cout << "Insert another book into the list (Y or N)?  ";
		cin >> answer;
	} while (toupper(answer) == 'Y');

	head = reverse(head);

	cout << "Here is the list of books:\n\n";
	displayList(head);

	return 0;
}
// --------------
void insertBook(Book *& head)
{
	Book* temp = new Book;

	cout << "ID:  ";
	cin >> temp->id;
	cin.ignore();

	cout << "Title:  ";
	getline(cin, temp->title);
	cout << "Author:  ";
	getline(cin, temp->author);

	temp->next = head;
	head = temp;
}
// --------------
void displayList(Book *& head)
{
	Book* temp = head;

	while (head != NULL)
	{
		cout << "ID:  " << head->id << endl
			<< "Title:  " << head->title << endl
			<< "Author:  " << head->author << endl << endl;
		head = head->next;
	}
}
// --------------

Book* reverse(Book *& head)
{
	Book *current, *prev, *next;
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
	return head;
}