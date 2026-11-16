#include <iostream>
using namespace std;

int main() {
	int n, r;
	cin >> n >> r;
	char a[1000], b = 1;
	for (int i = 1; i <= 100000; i++) {
		int y = n % r;
		if (y < 10) {
			a[b] = '0' + y;
		} else {
			a[b] = 'A' + y - 10;
		}
		b++;
		n = n / r;
		if (n == 0) {
			break;
		}
	}
	for (int i = b - 1; i >= 1; i--) {
		cout << a[i];
	}
	return 0;
}
