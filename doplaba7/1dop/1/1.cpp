#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int m, k;
	for (int i = 10; i < 32; i++)
	{
		if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0)
		{
			k = i * i;
			cout << k << endl;
		}
	}
}