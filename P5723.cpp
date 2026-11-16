#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int L, w = 0, s = 0, p = 0;
	cin >> L;
	for (int i = 2; i <= 100000; i++) {
		for (int j = 1; j < i; j++) {
			if (i % j == 0) {
				w = w + 1;
			}
		}
		if (w == 1) {
			p = p + i;
		}
		if (p <= L && w == 1) {
			s = s + 1;
			cout << i << endl;
		}
		if (p > L) {
			break;
		}
		w = 0;
	}
	cout << s;
	return 0;
}



