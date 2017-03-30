#include <iostream>
using namespace std;
const int MAX_SIZE = 10;

class UnsortedList
{
private:
	int numbers[MAX_SIZE];
	int length = 0;

public:
	UnsortedList();
	~UnsortedList();
	void insertItem(int);
	void deleteItem(int);
	bool isFull() const;
	bool isEmpty() const;
};