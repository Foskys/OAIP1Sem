#include <iostream>
#include <locale>
int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	const int maxSize = 100;
	int A[maxSize], i, s = 0, n;
	cout << "Введите размер массива (0 < n <= 100) ";
	cin >> n;
	srand((unsigned)time(NULL));
	cout << "Исходный массив A = {";
	for (i = 0; i <= (n - 1); i++)
	{
		A[i] = rand() % 100;
		cout << " " << A[i];
		if (i < n - 1)
			cout << ';';
	}
	cout << "}";
	for (i = 1; i <= (n - 1); i++)
	{
		s += A[i - 1];
		A[i] = s;
	}
	cout << endl << "Новый массив A = {";
	for (i = 0; i <= (n - 1); i++)
	{
		cout << " " << A[i];
		if (i < n - 1)

			cout << ';';
	}
	cout << "}";
}