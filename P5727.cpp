#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long long n, a[3000], c;
	cin >> n;
	long long m = n;
	for (int i = 1;; i++) {
		a[i] = n;
		if (n % 2 != 0) {
			n = n * 3 + 1;
		} else {
			n = n / 2;
		}

		c = i;
		if (a[i] == 1) {
			break;
		}

	}
	for (int j = c;; j--) {
		cout << a[j] << " ";
		if (a[j] == m) {
			break;
		}
	}

	return 0;
}


