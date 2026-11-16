#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int w = b - a + 1;
	for (int i = a; i <= b; i++) {
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				w = w - 1;
				break;
			}
		}

	}
	cout << w;
	return 0;
}


