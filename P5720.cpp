#include <iostream>
using namespace std;

int main() {
	int a, d = 1;
	cin >> a;
	for (int i = 1; i <= 100; i++) {
		if (a != 1) {
			a = a / 2;
			d = d + 1;
		}
	}
	cout << d;
	return 0;
}
