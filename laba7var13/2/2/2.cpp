#include <iostream>
using namespace std;
int main() {
	int count = 0;
	int number = 1;

	while (count < 6) {
		if (number % 3 == 0 && number % 5 == 0) {
			cout << number << " ";
			count++;
		}
		number++;
	}

	return 0;
}