#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int size;
	cout << "Введите размерность массива: ";
	cin >> size; 
	cout << endl;

	int* arr = new int[size];

	cout << "Массив: " << endl;

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	int min_size = arr[0], min_size_num;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] <= min_size)
		{
			min_size = arr[i];
			min_size_num = i;

		}
	}
	cout <<endl;
	cout << "Минимальный элемент = " << min_size << ", который находится под номером: " << min_size_num + 1 << endl;

	int sum = 0, mult = 1;

	for (int i = 0; i < min_size_num; i++)
	{
		sum += arr[i];
		mult *= arr[i];
	}
	cout << endl;
	cout << "Сумма элементов до " << min_size_num + 1 << " номера равна = " << sum << ", произведение = " << mult << endl;
	cout << endl;

	delete[] arr;
}
