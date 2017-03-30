#include "Furniture.h"

Furniture::Furniture()
{
	id = 0;
	name = "";
	price = 0;
}


Furniture::~Furniture()
{
}

void Furniture::display()
{
	cout << "ID: " << id << endl;
	cout << "Name: " << name << endl;
	cout << "Price " << price << endl;
} 
