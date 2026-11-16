#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b, w = 0;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		for (int c = 0; c <= 14; c++) {
			for (int d = c; d <= 14; d++) {
				int a1 = 1, a2 = 1;
				for (int y = 0; y < c; y++) {
					a1 = a1 * 2;
				}
				for (int x = 0; x < d; x++) {
					a2 = a2 * 2;
				}
				if (a1 + a2 == i) {
					w = w + 1;
					break;
				}
			}
		}
	}

	cout << w;
	return 0;
}


