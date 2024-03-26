#include <iostream>
#include <algorithm> //algorithm содержит функцию sort(), которая поможет нам решить это задании значительно быстрее
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	string dict[] = { "word", "orwd", "dord", "gord" }; //строковый массив - словарь слов
	//для наглядности выводим все слова массива на экран
	for (int i = 0; i < sizeof(dict) / sizeof(dict[0]); i++)
	{
		cout << dict[i] << " ";
	}
	cout << endl; //спускаемся на строку ниже
	//вычисляем слова записанные одними и теми же буквами
	for (int i = 0; i < sizeof(dict) / sizeof(dict[0]); i++)
	{
		//если их длина одинакова, продолжаем
		if (dict[i].size() == dict[i + 1].size())
		{
			//соритруем наши слова по номерам в кодировке
			sort(dict[i].begin(), dict[i].end());
			sort(dict[i + 1].begin(), dict[i + 1].end());
		}
		//если после сортировки слова идентичны, то они записаны одними и теми же буквами
		if (dict[i] == dict[i + 1])
		{
			cout << "Слово под номером " << i + 1 << " и слово под номером " << i + 2 << " записаны одними и теми же буквами.";
		}
	}
}
