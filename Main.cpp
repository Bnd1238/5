#include "dim.h"
int main()
{
	int st, sl;
	cin >> st >> sl;
	int **mas = new int* [st];
	for (int i = 0; i < st; ++i)
	{
		mas[i] = new int[sl];
	}
	fl(mas, st, sl);
	print(mas, st, sl);
	for (int i = 0; i < st; ++i)
	{
		delete[] mas[i];
	}
	delete[] mas;
	return 0;
}