#include <iostream>
using namespace std;
 int main()
{
	setlocale(LC_CTYPE, "Russian");
	const int maxSize = 100;
	int u, i, kol = 0, X[maxSize];
	double n;
	bool a;
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
	cout << "Количество неповторяющихся элементов = ";
	for (u = 0; u <= n - 1; u++)
	{
		a = true;
		for (i = 0; i <= n - 1; i++)
		{
			if (*(X + u) == *(X + i) && i != u)
				a = false;
		}
		if (a == true)
			kol++;
	}
	cout << kol;
}
