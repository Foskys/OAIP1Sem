#include <iostream>
#include <algorithm>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	const int k = 11;
	int arr[k] = { 0,1,1,1,1,5,7,9,9,9,2 }, arr_count[k], count = 0, a = 1, col = 0, i = 0, sum = 0;
	while (i < 11)
	{
		while (arr[i] == arr[i + a])
		{
			count++;
			a++;
		}
		if (count > 0)
		{
			arr_count[col] = count;
			col++;
			count = 0;
			i = i + a;
			a = 1;
		}
		else
		{
			count = 0;
			i = i + a;
			a = 1;
		}
	}
	for (int el : arr_count)
	{
		if (el > 0)
		{
			sum = sum + el;
		}
		else { continue; }
	}
	cout << "Number of different elements: " << k - sum;
	return 0;
}