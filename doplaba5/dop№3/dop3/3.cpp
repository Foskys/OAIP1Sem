#include <iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "Russian");
	double a, b, p, q, r, s;
	cout << "Введите длину и ширину участка застройки: "; cin >> a; cin >> b;
	cout << "Введите длину и ширину первого дома: "; cin >> p; cin >> q;
	cout << "Введите длину и ширину второго дома: "; cin >> r; cin >> s;
	(a * b - p * q < r * s) 
		cout << "На таком участке застройки нельзя расположить два дома с такими размерами." : cout << "На таком участке застройки можно построить такие два дома.";
}