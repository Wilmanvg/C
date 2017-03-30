#include "StudentList.h"

int main() {
	char answer;
	int id;
	string name;
	StudentList list;

	cout << "Insert Student into the list: \n\n";

	do {
		cout << "ID: ";
		cin >> id;
		cin.ignore();

		cout << "Name:  ";
		getline(cin, name);

		list.insertStudent(id, name);

		cout << "Insert another record (Y or N)? ";
		cin >> answer;

	} while (toupper(answer) == 'Y');
	system("CLS");

	cout << "Here is the list: \n\n";
	list.displayList();

	return 0;
}