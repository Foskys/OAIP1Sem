#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int size;
	cout << "Введите размерность массива: ";
	cin >> size;
	int* arr = new int[size];

	cout << endl;
	cout << "Массив: " << endl;

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10 - 5;
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;

	int k = 0;
	for (int i = 0; i < size; i++) /*количество положительных чисел*/
	{
		if (arr[i] > 0)
		{
			k++;
		}
	}
		int number = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 0)
		{
			number = i;
		}
	}

	if (number == 0)
	{
		cout << endl;
		cout << "Количество положительных чисел = " << k << endl;
		cout << "Сумма элементов после нуля = 0 " << endl;
	}
	else
	{
		int sum = 0;

		for (number; number < size; number++) /*сумма элементов после нуля*/
		{
			sum += arr[number];
		}

		cout << endl;
		cout << "Количество положительных чисел = " << k << endl;
		cout << "Сумма элементов после нуля = " << sum << endl;
	}

	delete[] arr;
}
