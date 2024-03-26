#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	const int maxSize = 100;
	int u, i, X[maxSize], t;
	double n, sr_ar = 0;
	cout << "Введите размер массива (0 < n <= 100) ";
	cin >> n;
	while (n < 1 || n - (int)n != 0 || n > maxSize)
	{
		cout << "Число не удовлетворяет условию, введите другое число" << endl;
		cin >> n;
	}
	srand((unsigned)time(NULL));
	cout << endl << "Массив Х = {";
	for (u = 0; u <= n - 1; u++)
	{
		*(X + u) = rand() % 50;
		cout << " " << * (X + u);
		if (u < n - 1)
			cout << ';';
	}
	cout << "}" << endl;
	cout << "Среднее арифметическое элементов массива = ";
	for (u = 0; u <= n - 1; u++)
		sr_ar += *(X + u);
	sr_ar /= n;
	cout << sr_ar;
	for (u = 0; u <= n - 1; u++)
	{
		if (*(X + u) < sr_ar)
		{
			t = *(X + u);
			for (i = u; i > 0; i--)
			{
				*(X + i) = *(X + i - 1);
			}
			*X = t;
		}
	}
	cout << endl << "Новый массив Х = {";
	for (u = 0; u <= n - 1; u++)
	{
		cout << " " << * (X + u);
		if (u < n - 1)
			cout << ';';
	}
	cout << "}" << endl;
}