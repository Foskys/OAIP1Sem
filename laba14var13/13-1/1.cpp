#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	const int Max_n = 100;
	int C[Max_n][Max_n];
	int n, k, m, min, stolbec;
	cout << "Введите количество строк и столбцов квадратной матрицы: ";
	cin >> n;
	srand((unsigned)time(NULL));
	cout <<"Матрица:" << endl;
	for (k = 0; k < n; k++)
	{
		for (m = 0; m < n; m++)
		{
			C[k][m] = rand() % 51;
			cout << C[k][m] << ' ';
			if (C[k][m] < 10)
				cout << " ";
			if (m == n - 1)
				cout << endl;
		}
	}
	min = C[0][0];
	stolbec = 0;
	for (k = 0; k < n; k++)
	{
		for (m = 0; m < n; m++)
		{
			C[k][m] = rand() % 51;
			cout << C[k][m] << ' ';
			if (C[k][m] < 10)
				cout << " ";
			if (m == n - 1)
				cout << endl;
		}
	}
	min = C[0][0];
	stolbec = 0;
	for (k = 0; k < n; k++)
	{
		if (C[k][k] < min)
		{
			min = C[k][k];
			stolbec = k;
		}
	}
	cout << "Наименьший элемент главной диагонали матрицы - C[" << stolbec + 1 << "; " << stolbec + 1 << "] = " << min;
	cout<<"Столбец, в котором находится наименьший элемент главной диагонали матрицы: " << endl;
	for (k = 0; k < n; k++)
		cout << C[k][stolbec] << endl;
}
