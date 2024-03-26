#include <iostream>
using namespace std;
int main()

{
	setlocale(LC_CTYPE, "Russian");
	int A, B = 3067833783; char tmp[33];
	cout << " Введите число А: ";
	cin >> A;
	_itoa_s(A, tmp, 2);
	cout << " Число А: " << tmp << endl;
	_itoa_s(B, tmp, 2);
	cout << " Маска для А: " << tmp << endl;
	_itoa_s(A & B, tmp, 2);
	cout << " Результат: " << tmp << endl;
	return 0;
}
