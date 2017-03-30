#include <string>			//For string
#include <iostream>			//For cout 
using namespace std;

#ifndef HOMINID_H			//Checks to see if Hominid_H is already defined
#define HOMINID_H			//If not it defines Hominid_H

class Hominid				//Class Header
{
private:
	string name;
	bool writtenLang;
public:
	Hominid();				//Default Constructor
	Hominid(string, bool);	//Constructor witth arguments
	void setInfo(string n, bool lang)
	{
		name = n;
		writtenLang = lang;
	}
	
	void displayInfo();

	~Hominid();
};

#endif