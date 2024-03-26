#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int n, sum = 0, number, count = 1;
	cout << "n = "; 
	cin >> n;
	while (count <= n)
	{
		count++;
		cout << "Print number: ";
		cin >> number;
		if (number % 2 == 0)
			sum = sum + number;
		else
			continue;
	}
	cout << "Sum of even elements = " << sum;
	return 0;
}
