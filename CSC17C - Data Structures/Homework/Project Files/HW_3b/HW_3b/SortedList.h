#include <iostream>
#include <cstdlib>
using namespace std;
const int MAX_SIZE = 10;

class SortedList
{
private:
	int numbers[MAX_SIZE];
	int length = 0;

public:
	SortedList();
	~SortedList();
	void insertItem(int);
	void deleteItem(int);
	bool isFull() const;
	bool isEmpty() const;
	int linearSearch(int);
	int binarySearch(int);
};

