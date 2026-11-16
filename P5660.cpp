#include <iostream>
using namespace std;

int main() {
	int b = 0;
	char a;
	for (int i = 1; i <= 8; i++) {
		cin >> a;
		if (a == '1') {
			b++;
		}
	}
	cout << b;
	return 0;
}
