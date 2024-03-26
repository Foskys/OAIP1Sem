
#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	char predl[1000];
	int i, k, nom;
	cout << "Введите предожение: ";
	gets_s(predl);
	cout <<"Введите позицию символа k: ";
	cin >> k;
	nom = 1;
	for (i = 0; i <= k - 1; i++)
	{
		if (*(predl + i - 1) == ' ')
			nom++;
	}
	if (*(predl + k) == ' ')
		cout << "Номер предыдущего слова - " << nom - 1;
	else
		cout << "Номер слова, в котором содержится k-й символ - " << nom;
}
