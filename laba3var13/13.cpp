#include <iostream>
using namespace std;
int main()
{
	double t, y, d = 0.5e-8, c = -9, a = 1.5;
	const double e = 2.71828;
	t = (d * c + a * sqrt(abs(c - 1)));
	y = 0.5*t / d + pow(e, a);
	cout << "t=" << t << '\n';
	cout << "y=" << y;
}