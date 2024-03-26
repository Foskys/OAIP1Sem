#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int num, n, count_n = 1, count_num = 0;
	cout << "n = "; 
	cin >> n;
	int N = 0;
	while (count_n <= n)
	{
		cout << "num = "; 
		cin >> num;
		count_n++;
		if (N * num < 0)
		{
			N = num;
			count_num++;
		}
		else if (N * num > 0)
		{
			N = num;
			continue;
		}
		else if (num != 0)
		{
			N = num;
			continue;
		}
	}
	cout << "Кол-во чередований: " << count_num;
	return 0;
}
