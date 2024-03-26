#include<iostream> 
using namespace std;
void foo1(int n, int m, int* arr[])
{
	for (int i = 0; i < n; i++) {
		if (arr[i][0] != 0)
			for (int j = 0; j < m; j++)
				arr[i][j] += 1;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
void foo2()
{
	string str = "victoria виктория";
	for (int i = 0; i < str.size(); i++) {
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] = '?';
		if (str[i] <= 'я' && str[i] >= 'а')
			str[i] = toupper(str[i]);
	}
	for (int i = 0; i < str.size(); i++)
		cout << str[i];
}

void main()
{
	setlocale(0, "");
	int n, m;
	cout << "выберите номер задания ";
	cout << "1: массив; 2: строка\n";
	cin >> n;
	switch (n)
	{
	case 1: {
		cout << "введите  col: ";
		cin >> n;
		cout << "введите row: ";
		cin >> m;
		int** arr = new int* [n];
		for (int i = 0; i < n; i++)
			arr[i] = new int[m];
		cout << "Введите " << n * m << " элементов:\n";
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cout << "arr[" << i + 1 << "." << j + 1 << "]: ";
				cin >> arr[i][j];
			}
		}
		foo1(n, m, arr);
		break;
	}
	case 2: {
		foo2();
		break;
	}
	default: {
		cout << "введите коректный вариант ";
		break;
	}
	}
}