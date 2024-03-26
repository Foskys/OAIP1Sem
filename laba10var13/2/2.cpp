#include <iostream>
#include <locale>
int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	const int maxSize = 100;
	char A[maxSize];
	int u, i;
	double k;
	bool a;
	cout << "Введите размер массива (0 < k <= 100) ";
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
		A[u] = 'a' + rand() % 26;
		cout << " " << A[u];
		if (u < k - 1)
			cout << ';';
	}
	cout << "}" << endl;
	cout << "Буквы, которые не повторяются: ";
	for (u = 0; u <= k - 1; u++)
	{
		a = true;
		for (i = 0; i <= k - 1; i++)
		{
			if (A[u] == A[i] && i != u)
				a = false;
		}
		if (a == true)
			cout << A[u] << ' ';
	}
}
