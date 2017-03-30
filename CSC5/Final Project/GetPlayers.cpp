#include "tictacheader.h"

void GetPlayers(string& player1, //INPUT - Holds player 1's (X's) name
				string& player2 //INPUT - Holds player 2's (O's) name
				)
 {
	//Prompts user to enter 1st player's name
	cout << "Please enter Player 1's ('X') name:";
	getline(cin,player1);	//Allows the user to enter full name
	//Gathers the whole line from the user

	//Prompts player 2 to ener their name
	cout << "Please enter Player 2's ('O') name:";
	getline(cin,player2);
	//Gathers the whole line from the user
 }
