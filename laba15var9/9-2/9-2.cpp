#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	const int row = 5;
	const int col = 5;
	int arr[row][col];

	cout << "\t Матрица: " << endl;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 15 - 5;
		}
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << "\n";
	}

	int num_row = 0;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (arr[i][j] < 0)
			{
				break;
			}

			else
			{
				num_row = i;
				goto active;
			}
		}

	}

active:
	int sum = 0;

	for (int i = num_row; i <= num_row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			sum += arr[i][j];
		}
	}
	cout << "\n Сумма элементов " << num_row + 1 << " строки = " << sum << endl;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] -= sum;
		}
	}

	cout << "\n \t Новая матрица: \n" << endl;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << "\n";
	}


	cout << endl;

}
