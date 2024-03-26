#include <iostream>
int main()
{
	using namespace std;
	double a = 1, b = 2, e = 0.0001, x;
	while (abs(a - b) > (2 * e))
	{
		x = (a + b) / 2;
		cout << x << endl;
		if ((exp(x) + x - 4) * (exp(a) + a - 4) <= 0)
			b = x;
		else a = x;
	}
	cout << x << endl;
	return 0;
}