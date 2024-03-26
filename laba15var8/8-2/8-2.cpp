#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	const int row = 5;
		const int col = 5;
	int arr[row][col];

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 5 - 5;
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

	int num_col = 0;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (arr[i][j] == 0)
			{
				num_col = j + 1;
				break;
			}
		}
	}
	cout << endl;

	cout << " Номер первого из столбцов, содержащих хотя бы один нулевой элемент равен " << num_col << endl;

	cout << endl;
}
