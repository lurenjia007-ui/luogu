#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, s = 0, c = 0, a;
	for (int i = 1; i <= 12; i++) {
		cin >> n;
		s = s + 300;
		if (s - n < 0) {
			cout << "-" << i;
			break;
		}
		c = c + s - n - (s - n) % 100;
		s = (s - n) % 100;
		if (i == 12) {
			int p = s + c * 1.2;
			cout << p;
		}
	}

	return 0;
}
