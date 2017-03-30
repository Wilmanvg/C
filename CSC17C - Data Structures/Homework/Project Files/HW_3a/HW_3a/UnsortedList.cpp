#include "UnsortedList.h"

UnsortedList::UnsortedList()
{
}


UnsortedList::~UnsortedList()
{
}

void UnsortedList::insertItem(int value)
{
	numbers[length] = value;
	length++;
}

void UnsortedList::deleteItem(int item)
{
	int location = 0;

	while (item != numbers[location] && location < length)
	{
		location++;
	}

	if (location == length)
	{
		cout << "The item is not in the list." << endl << endl;
	}

	if (location < length)
	{
		numbers[location] = numbers[length - 1];
		cout << "Item has been deleted" << endl << endl;
		length--;
	}

}

bool UnsortedList::isFull() const
{
	return (length == MAX_SIZE);
}

bool UnsortedList::isEmpty() const
{
	return (length == 0);
}
