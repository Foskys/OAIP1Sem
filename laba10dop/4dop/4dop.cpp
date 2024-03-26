#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	const int maxSize = 100;
	int k, count = 0;
	int M[maxSize] = { 1, 2, 1, 2, 3, 4, 6, 4, 5, 6, 7, 9, 9 };
	cout << "Введите количество элементов массива: ";
	cin >> k;
	for (int i = 1; i < k; ++i) {
		if (M[i] != M[i - 1]) {
			count++;
		}
	}
	cout << count;
	return 0;
}
