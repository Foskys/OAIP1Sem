#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	if (a < b && b < c) {
		a = c;
		b = c;
	}
	else if (a > b && b > c) {
		// do nothing
	}
	else {
		a = a * a;
		b = b * b;
		c = c * c;
	}

	cout << a << " " << b << " " << c << endl;

	return 0;
}
