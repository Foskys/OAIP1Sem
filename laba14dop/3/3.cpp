#include <iostream>
	int const n = 4;
void display_matrix(int a[n][n]) {
	int i, j;

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
}

int main(void)
{
	int a[n][n], i, j, iteration;
	int max, max_i, max_j;
	srand(time(NULL));

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			a[i][j] = rand() % 20 - 10;
		}
	}
	printf("Initial matrix:\n");
	display_matrix(a);
	for (iteration = 0; iteration < n; iteration++) {
		max_i = 0;
		max_j = 1;
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				if (!(i == j && i < iteration)) {
					if (a[i][j] > a[max_i][max_j]) {
						max_i = i;
						max_j = j;
					}

				}
			}
		}
		max = a[max_i][max_j];
		a[max_i][max_j] = a[iteration][iteration];
		a[iteration][iteration] = max;
		printf("Iteration %d: swapped elements (%d,%d) and (%d,%d):\n",
			iteration + 1, max_j + 1, max_i + 1, iteration + 1, iteration + 1);
		display_matrix(a);
	}

	return 0;
}
