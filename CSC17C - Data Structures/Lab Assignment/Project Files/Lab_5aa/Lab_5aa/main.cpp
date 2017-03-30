#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {

	list <char> firstList = { 'a','c','b','e','d','f','h','i','k','l','n','m' ,'j' };
	list <char> secondList 


	cout << "Here is the first list sorted: " << endl;

	firstList.sort();

	for (list<char>::iterator it = firstList.begin(); it != firstList.end(); it++)
	{
		cout << *it << " ";
	}
}

