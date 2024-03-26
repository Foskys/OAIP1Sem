#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int n, p, A, B, q;
		cout << "число A: ";
		cin >> A;
	cout << "число B: "; 
	cin >> B;
	cout << "количество битов n: ";
	cin >> n;
	cout << "позиция p в числе А: ";
	cin >> p;
	cout << "позиция q в числе В: ";
	cin >> q;
	int maskA = 0, maskB = 0;
	for (int i = 1; i <= n; i++)
	{
		maskA <<= 1;
		maskA++;
		maskB <<= 1;
		maskB++;
	}
	maskA <<= p;
	maskB <<= q;
	char tmp[255];
	_itoa_s(A, tmp, 2);
	cout << "A = " << tmp << endl;
	_itoa_s(B, tmp, 2);
	cout << "B = " << tmp << endl;
	_itoa_s(maskA, tmp, 2);
	cout << "maskA = " << tmp << endl;
	_itoa_s(maskB, tmp, 2);
	cout << "maskB = " << tmp << endl;
	int copyfromA = (A & maskA) >> p;
	_itoa_s(A | maskA, tmp, 2);
	cout << "новое число A = " << tmp << endl;
	_itoa_s(copyfromA, tmp, 2);
	cout << "выделенные биты = " << tmp << endl;
	B = B & (~maskB);
	B = B | (copyfromA << q);
	_itoa_s(B, tmp, 2);
	cout << "новое число B = " << tmp << endl;

	return 0;
}

