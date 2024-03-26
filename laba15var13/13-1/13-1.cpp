#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	float* mas, sum1 = 0, sum2 = 0;
	int n, i, el1 = -1, el2;
	cout << "Введите размер массива: ";
	cin >> n;
	mas = (float*)malloc(n * sizeof(float));
	for (i = 0; i < n; i++)
	{
		cout << "Элемент " << i << ": ";
		cin >> mas[i];
	}
	cout << "mas = {";
	for (i = 0; i < n; i++)
	{
		cout << mas[i];
		if (i < n - 1)
		{
			cout << ", ";
		}
	}
	cout << "}" << endl;
	for (i = 0; i < n; i++)
	{
		if (mas[i] < 0)
		{
			if (el1 == -1)
			{
				el1 = i;
			}
			el2 = i;
		}
	}
	cout << "Индекс первого отрицательного элемента: " << el1 << endl;
	cout << "Индекс последнего отрицательного элемента: " << el2 << endl;
	for (i = 0; i < n; i++)
	{
		if (i % 2 != 0)
		{
			sum1 += mas[i];
		}
	}
	cout << "Сумма элементов с нечетными номерами: " << sum1 << endl;
	for (i = el1 + 1; i < el2; i++)
	{
		sum2 += *(mas + i);
	}
	cout << "Сумма элементов между первым и последним отрицательными номерами: " << sum2 << endl;
	free(mas);
}
