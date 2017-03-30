#include <list>
#include <iostream>
using namespace std;

int main()
{
	list<int>first;
	list<int>second(4,100);
	list<int>third(second);
	
	list<int>arrayList = { {16,2,77,29} };

	cout << "The contents of the list are : ";
	for (list<int>::iterator it = arrayList.begin(); it != arrayList.end(); it++)
	{
		cout << *it << ' ';
	}

	arrayList.push_front(99);
	arrayList.push_back(88);

	cout << endl;
	cout << "The contents after the push: ";

	for (list<int>::iterator it = arrayList.begin(); it != arrayList.end(); it++)
	{
		cout << *it << ' ';
	}

	cout << endl << endl;
	return 0;

}
