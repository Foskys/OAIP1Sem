#include <iostream>
#include <cmath>

int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int i;
	float x[10], z, y;
	for (i = 0; i < 5; i++)
	{
		cout << "Введите " << i+1 << "-е значение y: " << endl;
		cin >> x[i];
	}
	z = x[0];
	for (i = 1; i < 5; i++)
	{
		if (x[i] > z)
			z = x[i];
	}
	y = 0;
	for (i = 0; i < 5; i++)
		y += z * (pow(x[i], 2));
	cout << "максимум- " << z << endl << "Сумма - " << y << endl;

	return 0;
}
