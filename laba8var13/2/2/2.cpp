#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int i;
	float y, x[5], t = 0.5, s = 0;
	for (i = 0; i < 5; i++)
	{
		cout << "Введите " << i + 1 << "-е значение x " << endl;
		cin >> x[i];
		s += x[i] * x[i]+t;
	}

	while (t < 3.5)
	{
		if (t <= 2)
			y = cos(t * t);
		else
			y = s + t;
		t += 0.5;
		cout << "y = " << y << endl;
	}
}