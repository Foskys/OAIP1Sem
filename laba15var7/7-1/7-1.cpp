#include <iostream>;
using namespace std;
int main() {
	int* a, n, total = 0, amax = 0;
	cout << " n = "; 
	cin >> n;
	setlocale(LC_ALL, "rus");
	if (!(a = (int*)malloc(n * sizeof(int)))) 
	{
		cout << "overload" << endl;
		return 0; 
	}

	for (int i = 0; i < n; i++)
	{
		cout << "arr el: ";
		cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		total += a[i];
	}
	total = total / n;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > total)
		{
			amax += 1;
		}
	}
	cout << amax << " числа больше среднего арифметического" << endl;
	free(a);
	system("pause");
	return 0;
}
