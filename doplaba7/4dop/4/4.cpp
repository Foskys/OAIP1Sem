#include <iostream>
void main ()
{
	using namespace std;
	setlocale(LC_ALL, "Russian");
	int r, x, m, g, n;
	for (int n = 1000; n < 10000; n++)
	{
		if (n % 2 == 0 && n % 7 == 0 && n % 11 == 0)
		{
			g = n;
			r = g % 10;
			g = g / 10;
			x = g % 10;
			g = g / 10;
			m = g % 10;
			g = g / 10;
			if ((r + g + m + x) == 30)
			{
				cout << n << endl;
			}
		}
	}
}