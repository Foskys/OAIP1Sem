#include <iostream>
using namespace std;
void main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");
	int n, n1, s, p;
	double S = 0;
	cout << "Введите количество лет: ";
	cin >> n;
	cout << "Введите число %, на которое снижается цена на оборудование с каждым годом: ";
	cin >> p;
	cout << "Введите количество денег для закупки:" << endl;
	for (n1 = 1; n1 <= n; n1++)
	{
		cin >> s;
		S = s + S - S * p / 100;
	}
	cout << "общаая стоимость оборудования за " << n << " лет = " << S << endl;
}
