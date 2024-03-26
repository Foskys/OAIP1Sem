#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n, count = 0;
	string text, str;
	cout << "Input text: "; getline(cin, text);
	n = text.size();
	text = text + " ";
	for (int i = 0; i <= n; i++) {
		if (text[i] != ' ') {
			str = str + text[i];
		}
		else {
			count++;
			if (count % 2 == 0)
			{
				reverse(str.begin(), str.end());
				cout << str << " ";
			}
			str = "";
		}
	}
	return 0;
}

