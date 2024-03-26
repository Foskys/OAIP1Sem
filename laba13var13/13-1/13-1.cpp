
#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_ALL, "Rus");
	char predl[1000], nov[1000];
	int i, u = 0, nom;
	printf("Введите предложение: ");
	gets_s(predl);
	nom = 1;
	for (i = 0; predl[i] != 0; i++)
	{
		if (predl[i] == ' ')
		{
			nom++;
			if (nom % 2 == 0)
			{
				i++;
				for (i; predl[i] != ' ' && predl[i] != '\0'; i++);
				i--;
			}
			else
			{
				nov[u] = predl[i];
				u++;
			}
		}
		else
		{
			nov[u] = predl[i];
			u++;
		}
	}
	for (i = 0; i < u; i++)
		printf("%c", nov[i]);
}
