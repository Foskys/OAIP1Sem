

#include <iostream>
using namespace std;

int main()
{
		double f, d, z = 1.5e-8, i = -6, x = 4.5;
		d = tan(-x * i) / sqrt(x - z);
		f = sin(2 * d) / d;
		cout << "d=" << d << '\n';
		cout << "f=" << f;
	
}

