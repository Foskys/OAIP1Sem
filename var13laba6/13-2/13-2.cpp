#include <iostream>
void main()
{
	float a = 8, m = 6, b = 5e+3, k = a, d, c;
	while (k > 2.9)
	{
		d = sin(k / a) / cos(m * b);
		c = d / (pow(d, 2) + 1) / (1 - exp(k));
		printf("k = %5.2f\t", k);
		printf("c = %5.2f\n", c);
		k = k - 0.5;
	}
}
