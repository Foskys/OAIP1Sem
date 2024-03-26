#include <iostream>
void massivB(float* A, float* B, int& n, float& sum_kv, int& j) {
	using namespace std;
	int i;
	for (i = 0, j = 0; i < n; i++)
	{
		if (i % 2 == 0 && A[i] > 0)
		{
			B[j] = A[i];
			j++;
		}
	}
	for (i = 0; i < j; i++)
		sum_kv += B[i] * B[i];
}
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	float* A, * B, sum_kv = 0;
	int n = 21, i, j;
	A = new float[n];
	B = new float[n];
	cout << "Введите 20 положительных и отрицательных чисел" << endl;
	for (i = 0; i < n; i++)
	{
		cout << "Элемент " << i << ": ";
		cin >> A[i];
	}
	cout << "A = {";
	for (i = 0; i < n; i++)
	{
		cout << A[i];
		if (i < n - 1)
		{
			cout << ", ";
		}
	}
	cout << "}" << endl;
	massivB(A, B, n, sum_kv, j);
	cout << "Массив В сформирован из положительных элементов массива А, имеющих чётный индекс" << endl;
	cout << "B = {";
	for (i = 0; i < j; i++)
	{
		cout << B[i];
		if (i < j - 1)
		{
			cout << ", ";
		}
	}
	cout << "}" << endl;
	cout << "Сумма квадратов элементов равна sum_kv = " << sum_kv << endl;
	delete[] B;
	delete[] A;
}