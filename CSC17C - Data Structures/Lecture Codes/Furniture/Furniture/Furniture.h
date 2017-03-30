#include <iostream>
#include <string>
using namespace std;

#ifndef  FURNITURE_H
#define FURNITURE_H

class Furniture
{
private:
	int id;
	string name;
	float price;
public:
	Furniture();
	Furniture(int id, string name, float price)
	{
		this->id = id;
		this->name = name;
		this->price = price;
	}
	~Furniture();

	void setID(int id)
	{
		this->id = id;
	}

	void setName(string name)
	{
		this->name = name;
	}

	void setPrice(float price)
	{
		this->price = price;
	}

	float getPrice()
	{
		return price;
	}

	void display();

};

#endif // ! FURNITURE_H


