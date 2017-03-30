#include "stdafx.h"
#include "Hominid.h"


Hominid::Hominid()
{
}

Hominid::Hominid(string n, bool lang)
{
	name = n;
	writtenLang = lang;
}

void Hominid::displayInfo()
{
	cout << name << endl;
	if (writtenLang == 1)
	{
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

}

Hominid::~Hominid()
{
}
