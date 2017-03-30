//Attached: HW_3a, 3b, 3c
//==================================================
//Project: HW_3b
//==================================================
//Programmer: Wilman Garcia
//Class: CIS 17C
//==================================================

#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main() {

	vector<string> cities{ {"Venice","Paris", "Dublin"} };

	vector<string>::iterator it;
	vector<string>::reverse_iterator rit;

	cout << "Output the list using a for loop and the subscript operator:" << endl;
	for (int i = 0; i != cities.size(); i++)
	{
		cout << cities[i] << endl;
	}


	cout << "\nOutput the list using a for loop and iterator: " << endl;
	
	for (it = cities.begin(); it != cities.end(); it++)
	{
		cout << *it << endl;
	}

	cout << "\nOutput the list in reverse order using a for loop and reverse_iterator: " << endl;
	for (rit = cities.rbegin(); rit != cities.rend(); rit++)
	{
		cout << *rit << endl;
	}

	cout << "\n# of cities: " << cities.size() << endl << endl;
	cout << "The second city on the list is " << cities[1] << endl << endl;
	cout << "Now swapping the first city with the second city." << endl << endl;
	cities[1].swap(cities[0]);
	cout << "Now the second city is " << cities[1] << endl;
}

//==================================================