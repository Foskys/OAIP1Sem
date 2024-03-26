#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int i;
	float y, x[5], t = 0.5, min;
	for (i = 0; i < 5; i++)
	{
		cout << "Введите " << i + 1 << "-е значение x " << endl;
		cin >> x[i];
	}
	while (t < 3.5)
	{
		if (t <= 2)
			y = cos(t * t);
		else
		{
			min = x[0];
			for (i = 1; i < 5; i++)
			{
				if (x[i] < min)
					min = x[i];
			}
			y = min;
		}
		cout << "y = " << y << endl;
		t += 0.5;
	}
}