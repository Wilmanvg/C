#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;
/************************************************************************
 * CONSTANTS (Global)
 *
 * NUM_COLUM			//INPUT -Holds the amount of columns
 * NUM_ROW				//INPUT - Holds the amount of rows
 * MAX_ PLAYS			//INPUT - Holds the max amount of turns
 ************************************************************************/
const int NUM_COLUMNS = 3;
const int NUM_ROW = 3;
const int MAX_PLAYS = 8;
/*************************************************************************
 * OutputInstruct
 * This function outputs instructions to the users. There are no input
 * or output parameters for this function as it only displays text to
 * the screen.
 *
 * RETURNS: nothing
 *  Displays the instructions to the user
 ************************************************************************/
void OutputInstruct();
/*************************************************************************
 * InitBoard
 * This function initializes each spot in the board to a space ' '.
 *
 * RETURNS: Board initialized with all spaces
 ************************************************************************/
void InitBoard(char boardAr[][NUM_ROW] //OUTPUT - Initializes the baord
			 );
/*************************************************************************
 * DisplayBoard
 * This function outputs the tic tac toe board including the tokens
 * played in the proper format (as described below).
 *
 * 	 1 		2 			3
 * 	[1][1] | [1][2] | [1][3]
 *        | 	   |
 * 1 	  | 	   |
 * 	      | 	   |
 *	 --------------------------
 * 	[2][1] | [2][2] | [2][3]
 * 		  | 	   |
 * 2 	  |		   |
 * 		  |		   |
 * 	--------------------------
 * 	[3][1] | [3][2] | [3][3]
 * 		  | 	   |
 * 3 	  | 	   |
 * 		  |        |
 *
 * RETURNS: nothing
 *  outputs the current state of the board
 ************************************************************************/
void DisplayBoard(const char boardAr[][NUM_ROW]); // tic tac toe board - IN
/*************************************************************************
 * GetPlayers
 * This function prompts the user and gets the input for the players� names.
 * player1 will always contain the name of the player that is using the X token.
 * player2 will always contain the name of the player that is using the O token.
 *
 * RETURNS: the players names through the variables player1 and player2.
 ************************************************************************/
void GetPlayers(string& player1, //INPUT - Player 1's name ('X)
				string& player2	 //INPUT - Player 2's name ('O')
				);
/*************************************************************************
 * GetAndCheckWin
 * This function gathers the users turns and places them in the array.
 * This function also does the input validation. If the user enters a
 * play that has already been done the user will be prompted with an error
 * to reenter their player. This function will also validate if the user
 * enters if a play that is not on the board. If this is the case the user
 * will be prompted to enter a player that is on the board
 ************************************************************************/
void GetAndCheckInp(char boardAr[][NUM_ROW],	//INPUT - The board
					char token, string player1, //INPUT - Player 1's name
					string player2				//INPUT - Player 2's name
					);
/*************************************************************************
 * SwitchToken
 * This function switches the active player.
 * It takes in a parameter representing the current player's token
 * as a character value (either an X or an O) and returns the opposite.
 * For example, if this function receives an X it returns an 0. If it
 * receives and O it returns and X.
 *
 * RETURNS: the token opposite of the one in which it receives.
 ************************************************************************/
char SwitchToken(char token //Input the current players token
				);
/*************************************************************************
 * CheckWin
 * This function checks to see if either player has run. It should be run
 * after each player makes a play.
 *
 * RETURNS the character value of the player that won or a value that
 * indicates a tie.
 *************************************************************************/
char CheckWin(const char boardAr[][NUM_ROW], //INPUT - The board
				int playCounter				//INPUT - Number of turns
			 );
/*************************************************************************
 * OutputWinner
 * This function receives as input a character indicating which player won
 * or if the game was a tie and outputs an appropriate message.This
 * function does not return anything as it simply outputs the appropriate
 * message to the screen.
 *
 * RETURNS: nothing
 *  Displays the winner's name
 ************************************************************************/
void OutputWinner(char whoWon, //OUTPUT - Represents winner or a tie game
				 string player1, //INPUT - Player 1's name
				 string player2);//INPUT - Player 2's name
/*************************************************************************
 * PrintHeader
 * This program prints he class header the tic tac toe game
 ************************************************************************/
void PrintHeader();
