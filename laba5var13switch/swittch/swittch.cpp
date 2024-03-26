#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int k;
	puts("Ты трапезничал сегодня? (1-Да, 2-Нет)");
	cin >> k;
	switch (k)
	{
	case 1:
	{puts("Что ты кушал? (1-Бутерброды, 2-Салат)");
	cin >> k;
	switch (k)
	{
	case 1:
	{
		puts("Это очень вредно для здоровья, ты знаешь об этом? (1-Да, 2-Нет, я ем их каждый день");
		cin >> k;
		switch (k)
		{
			case 1:
			{
				puts("А стакан воды с утра пил? (1-Да, 2-Нет)");
				cin >> k;
				switch (k)
				{
					case 1: puts("Хорошо"); break;
					case 2: puts("Выпей сейчас, я принесу тебе"); break;
				}
				break;
			}
			case 2: puts("очень плохо"); break;
		}
		break;
	}
	case 2:puts("это очень полезно"); break;
	}
	break;
	}
	case 2: puts("Надо покушать"); break;
	default: puts("Некорректный вариант"); break;
	}
	return 0;

}


