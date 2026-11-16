#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, a, w = 0, s = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		int p = a, c = a;
		for (int j = 1; j <= 8; j++) {
			if (p >= 0) {
				w = w + 1;
				p = p / 10;
			}
			if (p <= 0) {
				break;
			}
		}
		for (int y = 1; y <= w; y++) {
			s = s + pow(c % 10, w);
			c = c / 10;
		}
		w = 0;
		if (s == a) {
			cout << "T" << endl;
		} else
			cout << "F" << endl;
		s = 0;
	}

	return 0;
}



