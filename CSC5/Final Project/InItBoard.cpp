#include "tictacheader.h"
void InitBoard(char boardAr[][NUM_ROW] //INPUT- The playing board
				)
{
	//Initializes the plaing board with blank spaces
	for(int col = 0; col < 3; col++)
	{
		for(int row=0; row < 3; row++)
		{
			boardAr[col][row] = ' ';
		}
	}
}


