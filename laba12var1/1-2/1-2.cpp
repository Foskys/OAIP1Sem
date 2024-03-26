#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	const int n = 10;
	int* A = new int[n];
	int* B = new int[n];
	int el_a = 0, el_b = 0, count = 0;
	for (int a = 0; a < n; a++)
	{
		cout << "Add to A: ";
		cin >> el_a;
		A[a] = el_a;
	}
	for (int b = 0; b < n; b++)
	{
		cout << "Add to B: "; 
		cin >> el_b;
		B[b] = el_b;
	}
	sort(A, A + n);
	for (int c = 1; c < n; c++)
	{
		for (int i = 0; i < n; i++)
		{
			if (A[n - c] == B[i])
			{
				count++;
				break;
			}
			else { count = 0; }
		}
		if (count == 0)
		{
			cout <<"Max number : " << A[n - c];
			break;
		}
		else { continue; }
		count = 0;
	}
	return 0;
}
