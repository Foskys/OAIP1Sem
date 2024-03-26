#include <iostream> 
using namespace std;
void main1();
void main2();
void main() {
	setlocale(0, "");
	int* A, size, k;
	srand(time(0));
	cout << "1 - задание 1" << endl;
	cout << "2 - задание 2" << endl;
	for (int i = 0; i < 2; i++) {
		cin >> k;
		switch (k) {
		case 1: {
			main1(); break;
		}
		case 2: {
			main2(); break;
		}
		default:
			break;
		}
	}
}
void main1()
{
	const int maxSize = 60;
	int n, razn, i, kmin = 0, kmax = 0;
	int* a = new int[maxSize];
	cout << "Введите размер массива n<=60" << endl;
	cin >> n;
	if (n > 60)
	{
		return ;
	}
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
	{
		a[i] = rand() % 60;
		cout << a[i] << " ";
	}
	cout << endl;
	for (i = 0; i < n; i++)
	{
		if (a[i] < a[kmin])
		{
			kmin = i;
		}
	}
	cout << "мин элемент= " << a[kmin] << endl;
	for (i = 0; i < n; i++)
	{
		if (a[i] > a[kmax])
		{
			kmax = i;
		}
	}
	cout << "макс элемент= " << a[kmax] << endl;
	razn = a[kmax] - a[kmin];
	cout << "Разность элементов = " << razn;
	delete[] a;
}
void main2()
{
	int n, m, count = 0, ** A;
	cout << "Введите n: ";
	cin >> n;
	cout << "Введите m: ";
	cin >> m;
	A = new int* [n];
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
	{
		A[i] = new int[m];
		for (int k = 0; k < m; k++)
		{
			A[i][k] = rand() % 70 - 50;
			cout << A[i][k] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < m; k++)
		{
			if (A[i][k] > 0 && k != 0)
			{
				cout << "Столбец с положительным элементом: " << k + 1;
				cout << endl;
				for (int j = 0; j < n; j++)
				{
					A[j][k - 1] = -A[j][k - 1];
				}
			}
			else if (A[i][0] > 0 && k == 0) {
				cout << "Столбец с положительным элементом: 1 ";
			}
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < m; k++)
		{
			cout << A[i][k] << " ";
		}
		cout << endl;
	}
	for (int l = 0; l < n; l++)
	{
		delete[] A[l];
	}
	delete[] A;
}