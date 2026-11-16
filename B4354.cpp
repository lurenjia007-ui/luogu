#include <iostream>
using namespace std;

int main() {
	int n, k, t;
	cin >> n >> k >> t;
	if (k * t < n) {
		cout << k *t;
	}
	if (k * t >= n) {
		cout << n;
	}
	return 0;
}
