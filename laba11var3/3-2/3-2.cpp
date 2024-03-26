#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int a, maska, n, p, m, q, b, g; char tmp[33], arr[33], sqr[33];
	g = (1 << 32) - 1;
	_itoa_s(g, sqr, 2);

	cout << " Введите число A: ";
	cin >> a;
	_itoa_s(a, tmp, 2);

	cout << " В двоичной системе: " << tmp << endl;
	cout << " Введите позицию: ";
	cin >> p;
	cout << " Введите число битов: ";
	cin >> n;
	maska = 1 << n;
	maska = maska - 1;
	maska = maska << p;
	a = a ^ maska;
	a = (a & maska) >> p;

	_itoa_s(a, tmp, 2);

	cout << " Инвертированная часть числа: " << tmp << endl;
	cout << " Введите число B: ";

	cin >> b;

	_itoa_s(b, arr, 2);

	cout << " В двоичной системе: " << arr << endl;
	cout << " Введите позицию: ";
	cin >> q;
	cout << " Введите число битов: ";

	cin >> m;

	maska = 1 << m;
	maska -= 1;
	n = (~a & maska) << q;
	_itoa_s(a, tmp, 2);
	g -= n;
	_itoa_s(g, sqr, 2);
	b &= g;
	_itoa_s(b, arr, 2);
	a &= maska;
	b |= (a << q);
	_itoa_s(b, arr, 2);

	cout << " Измененное число: " << arr << endl;

}
