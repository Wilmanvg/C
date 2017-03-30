#include "tictacheader.h"
#include <cctype>
/*************************************************************************
 *
 * RUN TIC TAC TOE GAME
 * _______________________________________________________________________
 * This program allows two users to play a game of Tic Tac Toe. This
 * program will first display the name of the game and its instructions
 * on how to play. Then the program will ask the user if they would like
 * to play (if not the program ends). If the user would like to play they
 * are instructed to input the names of player 1 (X) and player 2 (O).
 * Once the user has inputed their names the board  will display and
 * the users will take turns placing their tokens ('X') or ('O') until
 * someone has placed three in a row (in any direction) or until all the
 * spaces on the board have been filled. The program will then display
 * the name of the winner of if it was a tie. The users will then be asked
 * if they would like to play again and if they would like to enter new
 * players. This will repeat until the user enters that they would no
 * longer like to play
 *________________________________________________________________________
 * INPUT
 * player1			: The name of 'X'
 * player2			: The name of 'O'
 * playCounter		: Counts the number of moves
 * gameCounter		: Counts the amount of games
 * newPlayers		: Holds if the user wants to enter new players
 *
 * OUTPUT
 * boardAr[][]		: 2 dimensional array that holds the board
 * token			: Holds the users token 'X' or 'O'
 *
 * *********************************************************************
 * CONSTANTS
 * NUM_ROW 			: Number of rows on the board
 * NUM_COLUMNS		: Number of columns on the board
 * MAX_PLAYS		: Max plays in a game
 ************************************************************************/
int main()
{
	char boardAr[NUM_COLUMNS][NUM_ROW];	//OUTPUT - Displays the board
	string player1;					//INPUT - Holds player 1's name
	string player2;					//INPUT - Holds player 2's name
	char token = 'Z';				//OUTPUT - Holds user token
	char play = 'Z';				//INPUT - Holds if user wants to play
	int playCounter = 0;			//INPUT - Holds the play counter
	int gameCounter = 0;			//INPUT - Holds the game counter
	char newPlayers = 'Z';			//INPUT - Holds new players decision
	char whoWon = 'Z';				//OUTPUT - Holds the winner

	PrintHeader(); //Function Call to display headr

	OutputInstruct(); //Function call to the instructions

	//Prompts the user if they would like to play
	cout << "Would you like to play Tic Tac Toe?(Y or N):";
	cin >> play;		//Holds the users choice

	//Input validation for the users choice
	while (toupper(play) != 'Y' && toupper(play) != 'N')
	{
		cout << "Please choose either Yes ('Y') or No ('N'):";
		cin >> play;
		cout << endl;
	}

	//Loops while the choice is yes ('Y')
	while(toupper(play) == 'Y')
	{
		//If it is past the first game playerd
		if(gameCounter > 0)
		{
			token = 'Z';	//Clears the token for new game
			whoWon = 'Z';	//Clears the winner for new game
			playCounter = 0; //Resets play counter for new game
			cout << "Would you like to enter new players (Y or N):";
			cin >> newPlayers;

			//Input validation for the users choice
			while (toupper(newPlayers)!='Y' && toupper(newPlayers) != 'N')
			{
				cout << "Please choose either Yes ('Y') or No ('N'):";
				cin >> newPlayers;
				cout << endl;
			}

			//Clears the buffer as precautionarey
			cin.ignore();

			//Allows the user to choose new players
			if(toupper(newPlayers) == 'Y')
			{
				GetPlayers(player1,player2);	//Function call
			}

			else;
		}

		//If it isn't the first game it gets the initial players names
		else
		{
			//Clears the buffer as a precaution
			cin.ignore();
			GetPlayers(player1,player2);	//Function call
		}

		InitBoard(boardAr);		//Function call
		DisplayBoard(boardAr);	//Function call

		//Plays until some one wins
		while(whoWon !='T' && whoWon != 'X' && whoWon != 'O')
		{
			token = SwitchToken(token);
			GetAndCheckInp(boardAr, token, player1,
								player2);
			DisplayBoard(boardAr);
			whoWon = CheckWin(boardAr,playCounter);
			playCounter++;

		}
		OutputWinner(whoWon, // represents the winner or a value
			 // indicating a tied game. - IN
			 player1, //player X�s name - OUT
			 player2);//player O�x name - OUT
			//system("pause");

			//Asks the user if they would like to play again
			cout << "Would you like to play again (Y or N):";
			cin >> play;

			//Input validation for the users choice
			while (toupper(play) != 'Y' && toupper(play) != 'N')
			{
				cout << "Please choose either Yes ('Y') or No ('N'):";
				cin >> play;
				cout << endl;
			}
			gameCounter++;	//Increments the game counter
	}
	return 0;
}
