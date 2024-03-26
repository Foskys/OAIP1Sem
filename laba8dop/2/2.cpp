#include <iostream>
#include <list>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int end_count, n, number, count = 1;
	cout << "n = ";
	cin >> n;
	list<int> list;
	while (count <= n)
	{
		count++;
		cout << "Print number: ";
		cin >> number;
		if (number < 0)
		{
			list.push_back(number);
			end_count = count - 1;
		}
		else
			continue;
	}
	int end = list.back();
	cout << "Last negative element: "<<end  << endl;
	cout << "Serial number: " << end_count;
	return 0;
}

