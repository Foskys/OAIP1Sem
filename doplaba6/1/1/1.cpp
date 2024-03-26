#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");
	double p, q;
	int d = 0;
	cout << "Введите сумму начальной выручки p = ";
	cin >> p;
	cout << "Введите значение желаемой выручки q = ";
	cin >> q;
	if (p >= q)
	{
		cout << "Некорректные данные" << endl;
	}
	for (d; p <= q; d++)
	{
		p += p * 3 / 100;
	}
	cout << "День: " << d << endl;
	cout << "Значение выручки: " << p << endl;
	return 0;
}
