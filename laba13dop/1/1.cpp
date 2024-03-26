#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	string text, str;
		char end;
	cout << "Input text: "; getline(cin, text);
	cout << "Input end: "; 
	cin >> end;
	n = text.size();
	text = text + " ";
	cout << endl;
	for (int i = 0; i <= n; i++) {
		if (text[i] != ' ') {
			str = str + text[i];
		}
		else {
			if (end == text[i - 1]) {
				cout << str << " ";
			}
			str = "";
		}
	}
	return 0;
}