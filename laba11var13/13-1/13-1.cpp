#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	char tmp[33];
	int A, B, maskA = 48;
	cout << "Первое число А = ";
	cin >> A;
	cout << "Второе число В = ";
	cin >> B;
	_itoa_s(A, tmp, 2);
	cout << "A (в двоичной системе) = " << tmp << endl;
	_itoa_s(B, tmp, 2);
	cout << "B (в двоичной системе) = " << tmp << endl;
	int read = A & maskA;
	int clearMask = ~maskA;
	B = B & clearMask;
	B = B | read;
	_itoa_s(B, tmp, 2);
	cout << "Новое B = " << B << endl;
	cout << "Новое B (в двоичной системе) = " << tmp << endl;
}