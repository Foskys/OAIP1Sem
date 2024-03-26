#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	char tmp[33];
	int A, B, n, m;
	cout << "Первое число = ";
	cin >> A;
	cout << "Второe число = ";
	cin >> B;
	_itoa_s(A, tmp, 2);
	cout << "A = " << tmp << endl;
	_itoa_s(B, tmp, 2);
	cout << "B = " << tmp << endl;
	cout << "Число n = "; 
	cin >> n;
	cout << "Число m = ";
	cin >> m;
	int maskA = (A >> n) & 7;
	int maskB = ~(7 << m);
	_itoa_s((B & maskB) | (maskA << m), tmp, 2); 
	cout << "B = " << tmp << endl;
	return 0;
}
