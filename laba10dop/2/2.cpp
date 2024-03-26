
#include <iostream>
#include <locale>
int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	const int maxSize = 1000;
	int A[maxSize];
	int u, i, schet = 0;
	double k;
	bool a;
	cout << "Введите размер массива (0 < k <= 1000) ";
	cin >> k;
	while (k < 1 || k - (int)k != 0 || k > maxSize)
	{
		cout << "Число не удовлетворяет условию, введите другое число" << endl;
		cin >> k;
	}
	srand((unsigned)time(NULL));
	cout << endl << "Исходный массив A = {";
	for (u = 0; u <= k - 1; u++)
	{
		A[u] = rand() % 50;
		cout << " " << A[u];
		if (u < k - 1)
			cout << ';';
	}
	cout << "}" << endl;
	for (u = 0; u <= k - 1; u++)
	{
		a = false;
		for (i = 0; i <= k - 1; i++)
		{
			if (A[u] == A[i] && i == u + 1)
			{
				a = true;
				schet++;
			}
		}
	}
	cout << "Количество пар соседних элементов массива с одинаковыми значениями - " << schet;
}
