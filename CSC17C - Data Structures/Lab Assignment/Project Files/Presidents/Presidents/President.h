#include <iostream>
#include <string>
using namespace std;

#ifndef PRESIDENT_H
#define PRESIDENT_H

class President
{
private: 
	string name; 
	string quote;

public:
	President();
	~President();
	President(string n, string q)
	{
		name = n;
		quote = q;
	}

	void setName(string n)
	{
		name = n;
	}

	void setQuote(string q)
	{
		quote = q;
	}

	string getName()
	{
		return name;
	}

	string getQuote()
	{
		return quote;
	}

	void displayPresident()
	{
		cout << name << endl;
		cout << quote << endl;
	}
};


#endif
