#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n, count = 0, kol = 0;
	string text, str;
	string arr[100];
	cout <<"Input text: "; getline(cin, text);
	n = text.size();
	text = text + " ";
	for (int i = 0; i <= n; i++) {
		if (text[i] != ' ')
			str = str + text[i];
		else {
			for (int k = 0; k <= count - 1; k++) {
				if (str == arr[k])
					kol++;
			}
			if (kol < 1) {
				arr[count] = str;
				count++;
			}
			kol = 0;
			str = "";
		}
	}
	for (int j = 0; j <= count + 1; j++) {
		cout << arr[j] << " ";
	}
	return 0;
}