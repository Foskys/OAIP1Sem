
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	
	float d, m = 6, b = 5e+3, k;
	double c, a = 2;
	while (a < 2.9)
	{
		cout << "Введите число" << endl;
		cin >> k;
		for (int n = 0; n < 3; n++) {
			d = sin(k / a) / cos(m * b);
			cout << "d=" << d << endl;
			c = d / (pow(d, 2) + 1) / (1 - exp(k));
			cout << "c=" << c << endl;
		}
		a = a + 0.2;
	}
	return 0;
}