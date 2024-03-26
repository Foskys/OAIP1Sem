#include <iostream>
using namespace std;
int main()
{
	int a = 0, b = 0, c = 0, d = 0, S = 0, sum = 100;
	setlocale(LC_ALL, "Russian");
	for (a = 0; a <= 2; a++) {
		for (b = 0; b <= 5; b++) {
			for (c = 0; c <= 20; c++) {
				for (d = 0; d <= 50; d++) {
					if (sum == (a * 50 + b * 20 + c * 5 + d * 2))
					{
						S++;
					}
				}
			}
		}
	}
	cout << "Количество способов равно " << S << endl;


}