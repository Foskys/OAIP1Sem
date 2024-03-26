#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");	
	const int Max_n = 50, Max_m = 50;
	int C[Max_n][Max_n];
	int n, m, k, j, kol = 0, sum;
	cout << "Введите количество строк матрицы: ";
	cin >> n;
	cout << "Введите количество столбцов матрицы: ";
	cin >> m;
	srand((unsigned)time(NULL));
	cout << "Матрица:" << endl;
	for (k = 0; k < n; k++)
	{
		for (j = 0; j < m; j++)
		{
			*(*(C + k) + j) = -50 + rand() % 101;
			if ((*(*(C + k) + j) > -10 && *(*(C + k) + j) < 0) || (*(*(C + k) + j) > 9))
				cout << " ";
			if (*(*(C + k) + j) > -1 && *(*(C + k) + j) < 10)
				cout << " ";
			cout <<* (*(C + k) + j) << ' ';
			if (j == m - 1)
				cout << endl;
		}
	}
	for (j = 0; j < m; j++)
	{
		sum = 0;
		for (k = 0; k < n; k++)
		{
			sum += *(*(C + k) + j);
		}
		for (k = 0; k < n; k++)
		{
			if ((sum > 0 && *(*(C + k) + j) > sum - abs(*(*(C + k) + j))) || (sum < 0 && *(*(C + k) + j) > sum + abs(*(*(C + k) + j))))
				kol++;
		}
	}
	cout << "Количество элементов матрицы, значение каждого из которых больше суммы остальных элементов своего столбца - " << kol;
}
