#include "tictacheader.h"

void GetAndCheckInp(char boardAr[][NUM_ROW],//INPUT- Holds the board
					char token,				//INPUT - Holds 'X' or 'O'
					string player1,			//INPUT - Player 1 name
					string player2			//INPUT - Player 2 name
					)
{
	int colChoice;							//INPUT - Column choice
	int rowChoice;							//INPUT - Row choice

	//Decides if it is player 1's turn
	if(token=='X')
	{
		//Outputs prompt to user
		cout << player1 << "'s turn!" << " What is the play?:";

		//Gathers input
		cin >> colChoice;
		cin >> rowChoice;

		//Decrements the users input to match the array
		rowChoice--;
		colChoice--;

		//Input validation for out of range input
		while(colChoice < 0 || colChoice > 2 || rowChoice < 0 ||
				rowChoice > 2)
		{
			cin.clear();
			cin.ignore(1000,'\n');
			//Prompts user with error
			cout << "Please enter a valid spot! For example 2 2. What"
					<< " is the play?:";

			//Gathers input from the user
			cin >> colChoice;
			cin >> rowChoice;

			//Decrements the users input to match the array
			rowChoice--;
			colChoice--;
		}

		//Input validation for already taken space
		while(boardAr[colChoice][rowChoice] == 'X' ||
				boardAr[colChoice][rowChoice] == 'O')
		{
			//Prompts the user with an error
			cout << "This spot is already taken! Please enter a different"
			<< " play!:" << endl;

			//Gathers user new input
			cin >> colChoice;
			cin >> rowChoice;

			//Decrements users input to match the array
			rowChoice--;
			colChoice--;

			while(colChoice < 0 || colChoice > 2 || rowChoice < 0 ||
					rowChoice > 2)
			{
				//Clears it if it s a letter
				cin.clear();
				cin.ignore(1000,'\n');
				//Prompts user with error
				cout << "Please enter a valid spot! For example 2 2. What"
						<< " is the play?:";

				//Gathers input from the user
				cin >> colChoice;
				cin >> rowChoice;

				//Decrements the users input to match the array
				rowChoice--;
				colChoice--;
			}
		}
		//Places token in inputed board location
		boardAr[colChoice][rowChoice] = token;
	}

	//Decides if it player 2's turn
	if(token=='O')
	{
		//Prompts user
		cout << player2 << "'s turn!" << " What is the play?:";

		//Gathers input from the user
		cin >> colChoice;
		cin >> rowChoice;

		//Decrements users input to match the array
		rowChoice--;
		colChoice--;

		while(colChoice < 0 || colChoice > 2 || rowChoice < 0 ||
							rowChoice > 2)
		{
			//Clears it if it s a letter
			cin.clear();
			cin.ignore(1000,'\n');
			//Prompts user with error
			cout << "Please enter a valid spot! For example 2 2. What"
					<< " is the play?:";

			//Gathers input from the user
			cin >> colChoice;
			cin >> rowChoice;

			//Decrements the users input to match the array
			rowChoice--;
			colChoice--;
		}

		//Input validation for already taken space
		while(boardAr[colChoice][rowChoice] == 'X' ||
					boardAr[colChoice][rowChoice] == 'O')
		{
			//Prompts the user with an error
			cout << "This spot is already taken! Please enter a different"
			<< " play!:" << endl;

			//Gathers new input
			cin >> colChoice;
			cin >> rowChoice;

			//Decrements the user input to match the array
			rowChoice--;
			colChoice--;

			while(colChoice < 0 || colChoice > 2 || rowChoice < 0 ||
					rowChoice > 2)
			{
				//Clears it if it s a letter
				cin.clear();
				cin.ignore(1000,'\n');
				//Prompts user with error
				cout << "Please enter a valid spot! For example 2 2. What"
						<< " is the play?:";

				//Gathers input from the user
				cin >> colChoice;
				cin >> rowChoice;

				//Decrements the users input to match the array
				rowChoice--;
				colChoice--;
			}
		}
		//Assigns token to users inputed board location
		boardAr[colChoice][rowChoice] = token;
	}
}
