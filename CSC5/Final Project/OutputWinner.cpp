#include "tictacheader.h"

void OutputWinner(char whoWon,	 //OUTPUT - Value of the winner
				 string player1, //INPUT - Player 1's (X) name
				 string player2	//INPUT - Plater 2's (O) name
				 )
{
	//Displays if 'X' won
	if(whoWon == 'X')
	{
		cout << player1 << " Wins!" << endl;;
	}

	//Displays if 'O' won
	if(whoWon == 'O')
	{
		cout << player2 << " Wins!" << endl;
	}

	//Displays if it is a tie game
	if(whoWon=='T')
	{
		cout << "Tie Game!" << endl;
	}
}
