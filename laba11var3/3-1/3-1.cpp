#include <iostream>
using namespace std;
int main()
{
	int a, maska; char tmp[33];
	setlocale(LC_CTYPE, "Russian");

	cout << "Введите число: ";
	cin >> a;
	_itoa_s(a, tmp, 2);
	cout << "В двоичной системе: " << tmp << endl;

	maska = 1;
	maska = (maska << 13);
	maska = maska - 1;
	maska = maska << 1;

	_itoa_s(maska, tmp, 2);
	a = a ^ maska;
	maska = 1 << 15;
	a = a & (~maska);

	_itoa_s(a, tmp, 2);
	cout << "Интерированное число: " << tmp << endl;
	return 0;
}
