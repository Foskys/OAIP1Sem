#include <iostream> 
using namespace std;
void matrica(int** Matr, int k, int n)
{
	int a, b, i, j, str_a, str_b, * V, z;
	bool el = false;
	cout << "Введите элемент a: ";
	cin >> a;
	V = new int[n];
	for (i = 0; i < k; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (Matr[i][j] == a)
			{
				el = true;
				str_a = i;
				for (z = 0, j = 0; z < n; z++, j++)
					V[z] = Matr[i][j];
				continue;
			}
		}
	}
	if (el == false)
		cout << "Такого элемента в матрице нет";
	cout << "Введите элемент b: ";
	cin >> b;
	el = false;
	for (i = 0; i < k; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (Matr[i][j] == b)
			{
				el = true;
				str_b = i;
				for (z = 0; z < n; z++)
					Matr[str_a][z] = Matr[str_b][z];
				continue;
			}
		}
	}
	if (el == false)
		cout << "Такого элемента в матрице нет";
	for (z = 0; z < n; z++)
		Matr[str_b][z] = V[z];
	cout << "Новая матрица: " << endl;
	for (i = 0; i <= k; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << Matr[i][j] << ' ';
			if (Matr[i][j] < 10)
				cout << ' ';
			if (j == n)
				cout << endl;
		}
		cout << endl;
	}
	delete[] V;
}
void slov(char* slova, char* okonch)
{
	char v_slova[100];
	int i, k, j = 0, poz = 0;
	bool a;
	for (i = 0; i <= strlen(slova); i++)
	{
		if (slova[i] == ' ' || slova[i] == '\0')
		{
			poz = i;
			if (slova[i] != '\0') {
				i = i - strlen(okonch) + 1;
			}
			else {
				i = i - strlen(okonch);
			}
			a = true;
			for (i, k = 0; i < poz; i++, k++)
			{
				if (slova[i] != okonch[k])
				{
					a = false;
					break;
				}
			}
			if (a == true)
			{
				for (i = poz - 1; i != -1 && slova[i] != ' '; i--) {
				}
				i++;
				for (i, j; i < poz; i++, j++) {
					v_slova[j] = slova[i];
				}
				v_slova[j] = ' ';
				j++;
			}
			i = poz + 1;
		}
	}
	for (i = 0; i < j - 1; i++)
		printf("%c", v_slova[i]);
}

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int choice;
	cout << "Здравствуйте! Выберите программу для выполнения:" << endl;
	cout << "1 - Поменять местами строки матриц в зависимости от выбранных элементов" << endl;
	cout << "2 - Вывести все слова предложения, оканчивающиеся на -ая" << endl;
	cout << "3 - Выход" << endl;
	cin >> choice;
	while (getchar() != '\n');
	switch (choice)
	{
		case 1:  int** Matr, k, n, i, j;
		cout << "Введите число строк ( <=12 ): ";
		cin >> k;
		while (k < 1 || k > 12)
		{
			cout << "Число не удовлетворяет условию, введите другое число" << endl;
			cin >> k;
		}
		cout << "Введите число столбцов ( <=8 ): ";
		cin >> n;
		while (n < 1 || n > 8)
		{
			cout << "Число не удовлетворяет условию, введите другое число" << endl;
			cin >> n;
		}
		Matr = new int* [k];
		for (i = 0; i < k; i++)
		{
			*(Matr + i) = new int[n];
		}
		for (i = 0; i < k; i++)
		{
		for (j = 0; j < n; j++)

			{
				cout << "Введите элементы матрицы [ " << i << " ][ " << j << " ]: ";
				cin >> Matr[i][j];
			}
			cout << endl;
		}
		cout << "Исходная матрица: " << endl;
		for (i = 0; i < k; i++)
		{
			for (j = 0; j < n; j++)
			{
				cout << Matr[i][j] << ' ';
				if (Matr[i][j] < 10)
					cout << ' ';
				if (j == n - 1)
					cout << endl;
			}
		}
		matrica(Matr, k, n);
		for (i = 0; i < k; i++)
			delete Matr[i];
		delete[] Matr;
		break;
        case 2: 	char slova[100], okonch[10];

		printf("Введите слова: ");
		fgets(slova, 100, stdin);
		printf("Введите окончание: ");
		fgets(okonch, 10, stdin);
		slov(slova, okonch);
		break;
		case 3:  cout << "До свидания!" << endl;
		break;
	}
	return 0;
}