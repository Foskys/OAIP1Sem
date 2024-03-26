#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Rus");
	float a, r, p, q;
	puts("Введите радиус: ");
	cin >> r;
	puts("Введите первую диагональ: ");
	cin >> p;
	puts("Введите вторую диагональ: ");
	cin >> q;
	a = sqrt(pow(q / 2, 2) + pow(p / 2, 2));
	if (r <= (q / 2) * (p / 2) / a)
		puts("В ромб в диагоналями p и q можно вписать окружность с радиусом r");
	else
		puts("В ромб в диагоналями p и q нельзя вписать окружность с радиусом r");
}