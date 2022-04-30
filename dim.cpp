#include "dim.h"
void fl(int** a, int st, int sl)
{
	for (int i = 0; i < st; ++i)
	{
		for (int j = 0; j < sl; ++j)
		{
			a[i][j] = rand() % 41 + 10;
		}
	}
}

void print(int** a, int st, int sl)
{
	for (int i = 0; i < st; ++i)
	{
		for (int j = 0; j < sl; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

