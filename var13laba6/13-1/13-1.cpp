#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	float d, c, a = 8, m = 6, b = 5e+3, k;
	for ( int n = 0; n < 3; n++)
	{
		printf("Введите k ");
		scanf_s("%f", &k);
		d = sin(k / a) / cos(m * b);
		c = d / (pow(d, 2) + 1) / (1 - exp(k));
		printf("k = %5.2f\t", k);
		printf("c = %5.2f\n", c);
	}
}
