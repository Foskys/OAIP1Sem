#include <iostream>
//#include <stdio.h>
void main()
{
	float t, x, b = 3, i = 8, c = 6e-4, a = 6;
	while (i < 25) {
		t = a * i / (pow(a, 2) - b) * exp(-a);
		printf("i=%5.2f\t", i);
		printf("t=%5.2f\t", t);
		if (t > 5 * c)
			x = 4.8e-3 + i * a;
		if (t <= 5 * c)
			x = a + pow(i, 2) * t;
		printf("x=%6.4f\n", x);
		i = i + 4;

	}
}
