#include "myheader.h"

int SearchForMatch(string userName, string name[], int id[],
					float balance[], int records)
{
	for (int index = 0; index < records; index++)
	{
		if(name[index] == userName)
		{
			//cout << index << endl;
			return index;
		}
	}
	return -1;
}
