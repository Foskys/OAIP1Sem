#include <iostream>

int main() {
	const int n = 10;
	for (int i = 1, k = n + 1; i <= n; i++, k--)
	{
		for (int temp = k; temp <= n; temp++) printf("%d ", temp);
		for (int j = 1; j < k; j++) printf("%d ", j);
		printf("\n");
	}
		return 0;
}
