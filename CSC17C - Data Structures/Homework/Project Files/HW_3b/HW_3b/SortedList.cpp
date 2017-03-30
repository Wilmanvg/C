#include "SortedList.h"

SortedList::SortedList()
{
}


SortedList::~SortedList()
{
}

void SortedList::insertItem(int value)
{
	int location = 0;
	location = linearSearch(value);

	for (int i = length; i > location; i--)
	{
		numbers[i] = numbers[i - 1];
	}
	numbers[location] = value;
	length++;
}

void SortedList::deleteItem(int item)
{
	int location = 0;

	location = binarySearch(item);
	
	if (location < length)
	{
		for (int i = location + 1; i < length; i++)
		{
			numbers[i - 1] = numbers[i];
		}

		cout << "Item has been deleted" << endl << endl;
		length--;
	}
	else
		cout << "The number is not in the list." << endl << endl;
}

bool SortedList::isFull() const
{
	return (length == MAX_SIZE);
}

bool SortedList::isEmpty() const
{
	return (length == 0);
}

int SortedList::linearSearch(int item)
{
	int location = 0;
	while ((item >= numbers[location]) && (location < length))
	{
		location++;
	}

	return location;
}

int SortedList::binarySearch(int item)
{
	int first = 0;
	int midpoint = 0;
	int last = length - 1;

	while (true)
	{
		if (first > last)
		{
			return first;
		}

		midpoint = (first + last) / 2;

		if (item == numbers[midpoint])
		{
			return midpoint;
		}

		else if (item > numbers[midpoint])
		{
			first = (midpoint + 1);
		}

		else if (item < numbers[midpoint])
		{
			last = (midpoint - 1);
		}
	}
}

