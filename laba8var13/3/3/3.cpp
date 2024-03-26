#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int i;
	float a[6], b[6], c[6], d = 0;
	for (i = 0; i < 6; i++)
	{
		cout << "Введите " << i + 1 << "-е значение a " << endl;
		cin >> a[i];
	}
	for (i = 0; i < 6; i++)
	{
		cout << "Введите " << i + 1 << "-е значение b " << endl;
		cin >> b[i];
	}
	for (i = 0; i < 6; i++)
	{
		c[i] = sqrt(a[i] + b[i]);
		cout << "c" << i + 1 << "=" << c[i] << endl;
	}
	for (i = 0; i < 6; i++)
		d += c[i] / (i + 1);
	cout << "d=" << d;
}
