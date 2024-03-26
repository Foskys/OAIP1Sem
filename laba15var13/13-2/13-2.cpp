#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	float** A;
	int n, m, i, j, str = 0;
	bool nuli;
	cout << "Введите число строк: ";
	cin >> n;
	cout << "Введите число столбцов: ";
	cin >> m;
	A = new float* [n];
	for (i = 0; i < n; i++)
	{
		*(A + i) = new float[m];
	}
	srand(time(NULL));
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			*(*(A + i) + j) = rand() % 4;
		}
	}
	cout << "Матрица:" << endl;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cout <<* (*(A + i) + j) << " ";
		}
		cout << endl;
	}
	for (i = 0; i < n; i++)
	{
		nuli = true;
		for (j = 0; j < m; j++)
		{
			if (*(*(A + i) + j) != 0)
			{
					nuli = false;
					break;
			}
		}
		if (nuli == true)
		{
			str = i;
			break;
		}
	}
	if (nuli == false)
		cout << "Строки с нолями нет";
	else {
		cout << "Строка со всеми нулями под номером " << str + 1 << endl;
		for (i = 0; i < n; i++)
		{
			*(*(A + i) + str) /= 2;
		}
		cout << "Полученная матрица:" << endl;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < m; j++)
			{
				cout <<* (*(A + i) + j) << " ";
			}
			cout << endl;
		}
	}
	for (i = 0; i < n; i++)
	{
		delete* (A + i);
	}
	delete[] A;
}
