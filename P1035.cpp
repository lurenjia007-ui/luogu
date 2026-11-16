#include <iostream>
using namespace std;

int main() {
	int k;
	double z = 0;
	cin >> k;
	for (int i = 1;; i++) {
		z = z + 1.0 / i;
		if (z > k) {
			cout << i;
			break;
		}
	}

	return 0;
}
