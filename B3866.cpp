#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n = 10000, a;
	cin >> a;
	int b = a, c1, c2, c3, d, s;
	int w = 0;
	for (int i = 1; i <= n; i++) {
		c1 = b % 10;
		c2 = (b / 10) % 10;
		c3 = (b / 100) % 10;
		if (c2 > c1) {
			d = c1;
			c1 = c2;
			c2 = d; //c1最大

		}
		if (c3 > c1) {
			d = c1;
			c1 = c3;
			c3 = d;
		}
		if (c2 < c3) {
			d = c2;
			c2 = c3;
			c3 = d; //c3最小
		}
		s = (100 * c1 + 10 * c2 + c3) - (100 * c3 + 10 * c2 + c1);
		w = w + 1;
		if (s == 495) {
			break;
		} else {
			b = s;
		}
	}
	cout << w;

	return 0;
}



