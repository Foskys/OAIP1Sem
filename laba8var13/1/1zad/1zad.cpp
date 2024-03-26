#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int i;
	float y[5], d, q;
	for (i = 0; i < 5; i++)
	{
		cout << "Введите " << i + 1 << "-е значение y " << endl;
		cin >> y[i];
	}
	d = y[0];
	for (i = 1; i < 5; i++)
	{
		if (y[i] < d)
			d = y[i];
	}
	q = 0;
	for (i = 0; i < 5; i++)
		q += 4 * y[i] + d;
	cout << "Минимум - " << d << endl << "Сумма - " << q;
}
