#include <iostream>
using namespace std;

int main() {
	double n, i, a;
	cin >> n >> i;
	for (int o = 1;; o++) {
		a = i + o * n;
		int b;
		for (int u = 1; u < n; u++) {
			a = a *n/(n-1) + i;
			b = a;
			if (b != a) {
				continue;
			}
		}
		if (b == a) {
			cout << b;
			break;
		}
	}
	return 0;
}
