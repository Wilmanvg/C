#include "tictacheader.h"

void DisplayBoard(const char boardAr[][NUM_ROW]//OUTPUT-Displays the board
				)
{
	system ("cls");

	int i;
	int j;
	cout << setw(10) << "1" << setw(8) << "2" << setw(9) << "3\n";
	for (i = 0; i < NUM_COLUMNS; i++)
	{
		cout << setw(7) << "[" << i+1 << "][1] | " << "[" << i+1;
		cout << "][2] | " << "[" << i+1 << "][3]" << endl;
		cout << setw(14) << "|" << setw(9) << "|" << endl;

		for (j = 0; j < NUM_ROW; j++)
		{
			switch(j)
			{
				case 0: cout << i + 1 << setw(9) << boardAr[i][j];
						cout << setw(4) << "|";
						break;
				case 1: cout << setw(4) << boardAr[i][j];
						cout << setw(5) << "|";
						break;
				case 2: cout << setw(4) << boardAr[i][j] << endl;
						break;
				default: cout <<"ERROR!\n\n";
			}
		}

		cout << setw(14)<< "|" << setw(10) << "|\n";

		if (i != 2)
		{
			cout << setw(32) << "--------------------------\n";
		}
	}
	cout << endl << endl;
}
