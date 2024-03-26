#include <iostream>
#include <math.h>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	double n;
	cout << "Введите n - ";
	cin >> n;
	if (n <= 36 and n > 0)
	{
		double Квартира = n, Этаж = ceil(n / 4);
		cout << "Квартира - " << Квартира << "\n";
		cout << "Этаж - " << Этаж << endl;
	}
	else
	{
		cout << "Ошибка" << endl;
	}
	return(0);
}
