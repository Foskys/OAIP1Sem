#include <iostream>
int main()
{
	using namespace std;
	float a = 8, b = 14, n = 200, h, x, s1 = 0, s2 = 0, s;
	int i;
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	for (i = 1; i < n; i++)
	{
		s2 += 2 + pow(x, 3);
		x = x + h;
		s1 += 2 + pow(x, 3);
		x = x + h;
	}
	s = (h / 3) * (2 + pow(a, 3) + 4 * (2 + pow((a + h), 3)) + 4 * s1 + 2 * s2 + 2 + pow(b, 3)); 
	cout << s << endl;
	return 0;
}