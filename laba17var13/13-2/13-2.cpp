#include <iostream> 
void min_zn(int** A, int& min_m, int& min_d, int& k, int& m, int& n, int& ind) {
	min_m = A[0][0];
	for (k = 0; k < n; k++)
	{
		for (m = 0; m < n; m++)
		{
			if (*(*(A + k) + m) < min_m)
				min_m = *(*(A + k) + m);
		}
	}
	min_d = A[0][0];
	for (k = 0; k < n; k++)
	{
		if (*(*(A + k) + k) < min_d)
		{
			min_d = *(*(A + k) + k);
			ind = k;
		}
	}
}
int main() {
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int** A, i, n, k, m, min_m, min_d, ind;
	cout << "Введите количество строк и столбцов квадратной матрицы: ";
	cin >> n;
	A = new int*[n];
	for (i = 0; i < n; i++)
	{
		*(A + i) = new int[n];
	}
	srand((unsigned)time(NULL));
	cout << "Матрица:" << endl;
	for (k = 0; k < n; k++)
	{
		for (m = 0; m < n; m++)
		{
			*(*(A + k) + m) = rand() % 51;
			cout << *(*(A + k) + m) << ' ';
			if (*(*(A + k) + m) < 10)
				cout << " ";
			if (m == n - 1)
				cout << endl;
		}
	}
	min_zn(A, min_m, min_d, k, m, n, ind);
	if (min_d == min_m)
	{
		cout << "Минимальное значение матрицы а = " << min_m << " находится на главной диагонали" << endl;
		cout << "Индексы этого элемента " << ind << "," << ind << endl;
	}
	else cout << "Минимальное значение матрицы не находится на главной диагонали" << endl;
	for (i = 0; i < n; i++)
	{
		delete* (A + i);
	}
	delete[] A;
}