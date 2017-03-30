#include "tictacheader.h"

void OutputInstruct()
{
	//Attemps to center the name of the game
	cout << "\t\t\t\t\tTic Tac Toe" << endl << endl;

	//Outputs the instuctions to the user
	cout << "Welcome to Tic Tac Toe" << endl;
	cout << "Instructions:" << endl;
	cout << "1. Enter a name for player 1 ('X') and then enter a name for"
		 << " player 2 ('O')" <<endl;
	cout << "2. Each player will take turns placing their token on a spot"
		 << " on the board by entering a location such as '2 2'"<< endl;
	cout << "3. The first player to get 3 of his/her tokens in a row"
			<< " (up, down, across, or diagonally) is the winner."
			<< endl << endl;
}
