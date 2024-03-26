#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int N, m, ost = 0, count = 0;
	int*arr = new int[100];
	cout << "Input y: ";
	cin >> N;
	cout << "Input m: ";
	cin >> m;
	while (N > 9)
	{
		ost = N % 10;
		N = (N - ost) / 10;
		if (ost % m == 0)
		{
			arr[count] = ost;
			count++;
		}
		else { continue; }
	}
	for (int j = 0; j < count; j++) {
		cout << arr[j] << " ";
	}
	return 0;
}
