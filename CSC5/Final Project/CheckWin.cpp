#include "tictacheader.h"
char CheckWin(const char boardAr[][NUM_ROW],//Holds the board spaces
					int playCounter //INPUT - Keeps number of turns
					)
{
	char winner;	//OUTPUT - Holds the value of the winner

	//By using brute for the following if statements check all possible
	//ways 'X' could win and returns back X if X has won

	if(boardAr[0][0]== 'X' && boardAr[1][0]=='X' &&
			boardAr[2][0] == 'X')
	{
		 winner = 'X';
	}

	if(boardAr[0][0]== 'X' && boardAr[0][1]=='X' &&
				boardAr[0][2] == 'X')
	{
		winner = 'X';
	}

	if(boardAr[0][0]== 'X' && boardAr[1][1]=='X' &&
					boardAr[2][2] == 'X')
		{
			winner = 'X';
		}

	if(boardAr[2][0]== 'X' && boardAr[2][1]=='X' &&
					boardAr[2][2] == 'X')
		{
			winner = 'X';
		}
	if(boardAr[0][1]== 'X' && boardAr[1][1]=='X' &&
					boardAr[2][1] == 'X')
		{
			winner = 'X';
		}

	if(boardAr[0][2]== 'X' && boardAr[1][1]=='X' &&
					boardAr[2][0] == 'X')
		{
			winner = 'X';
		}
	if(boardAr[0][2]== 'X' && boardAr[1][2]=='X' &&
					boardAr[2][2] == 'X')
		{
			winner = 'X';
		}
	//

	//By using brute for the following if statements check all possible
	//ways 'X' could win and returns back X if X has won

	if(boardAr[0][0]== 'O' && boardAr[1][0]=='O' &&
				boardAr[2][0] == 'O')
		{
			 winner = 'O';
		}

	if(boardAr[0][0]== 'O' && boardAr[0][1]=='O' &&
				boardAr[0][2] == 'O')
	{
		winner = 'O';
	}

	if(boardAr[0][0]== 'O' && boardAr[1][1]=='O' &&
					boardAr[2][2] == 'O')
		{
			winner = 'O';
		}

	if(boardAr[2][0]== 'O' && boardAr[2][1]=='O' &&
					boardAr[2][2] == 'O')
		{
			winner = 'O';
		}
	if(boardAr[0][1]== 'O' && boardAr[1][1]=='O' &&
					boardAr[2][1] == 'O')
		{
			winner = 'O';
		}

	if(boardAr[0][2]== 'O' && boardAr[1][1]=='O' &&
					boardAr[2][0] == 'O')
		{
			winner = 'O';
		}
	if(boardAr[0][2]== 'O' && boardAr[1][2]=='O' &&
					boardAr[2][2] == 'O')
		{
			winner = 'O';
		}

	//Checks if the game has ended in a tie
	else if(playCounter == MAX_PLAYS && winner != 'X' && winner != '0')
	{
		winner = 'T';	/* Assigns a 'T' to a winner if there was a tie*/
	}

	return winner;	//Returns the winner if there is one
}
