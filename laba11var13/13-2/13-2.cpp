#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	char tmp[33];
	int A, n, p, mask = 0, i;
	cout << "Введите число A = ";
	cin >> A;
	cout << "Введите число битов, которые нужно инвертировать в 1 n = ";
	cin >> n;
	cout << "Введите позицию, справа от которой будет происходить инвертирование p = ";
	cin >> p;
	_itoa_s(A, tmp, 2);
	cout << "A (в двоичной системе) = " << tmp << endl;
	for (i = 0; i < n; i++)
	{
		mask = mask | 1;
		mask = mask << 1;
	}
	mask = mask >> 1;
	mask = mask <<(p - n - 1);
	cout << "Mask = " << mask << endl;
	_itoa_s(mask, tmp, 2);
	cout << "Mask binary = " << tmp << endl;
	A = A | mask;
	cout << "A инвертированное = " << A << endl;
	_itoa_s(A, tmp, 2);
	cout << "A инвертированное (в двоичной системе) = " << tmp << endl;
}
