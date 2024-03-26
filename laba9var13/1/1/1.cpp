#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	float a = 8, b = 14, n = 200, h, s = 0, x;
	h = (b - a) / n;
	x = a;
	while (x < (b - h))

	{
		s += h * (2 + pow(x, 3) + 2 + pow((x + h), 3)) / 2;
		x += h;
	}
	cout << s << endl;
	return 0;
}