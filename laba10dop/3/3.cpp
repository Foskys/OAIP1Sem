#include <iostream>
#include <algorithm>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int arr[11] = { 0,1,1,1,1,1,7,9,9,9,2 }, arr_count[10], count = 0, a = 1, col = 0, i = 0;
	while (i < 11)
	{
		while (arr[i] == arr[i + a])
		{
			count++;
			a++;
		}
		arr_count[col] = count;
		col++;
		count = 0;
		i = i + a;
		a = 1;
	}
	const int size = sizeof(arr_count) / sizeof(arr_count[0]);
	sort(arr_count, arr_count + size);
	cout << arr_count[size - 1] + 1;
	return 0;
}
