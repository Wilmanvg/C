// Presidents.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "President.h"

void showInfo(President);

int main()
{
	President currentPres("Donald Trump", "Make America Great Again");
	President previousPres("","");

	string userInput;
	string userQuote;

	cout << "Enter the name of the Previous President: ";
	getline(cin, userInput);

	cout << "Emter the quote of the previous president: ";
	getline(cin, userQuote);

	previousPres.setName(userInput);
	previousPres.setQuote(userQuote);

	currentPres.displayPresident();
	previousPres.displayPresident();


    return 0;
}
