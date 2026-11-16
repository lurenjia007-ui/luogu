#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a, b, k = 1;
	cin >> a >> b;
	for (int i = 1;; i++) {
		if (a - b * k > b) {
			k++;
		} else {
			cout << a - b *k;
			break;
		}
	}
	return 0;
}
