#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int y, m, ost = 0, count = 0;
	int*arr = new int[100];
	cout << "Input y: ";
	cin >> y;
	cout << "Input m: ";
	cin >> m;
	while (y > 9)
	{
		ost = y % 10;
		y = (y - ost) / 10;
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
