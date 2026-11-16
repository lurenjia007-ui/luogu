#include <iostream>
using namespace std;

int main() {
	double a;
	int b = 0;
	cin >> a;
	double s = 0;
	for (double i = 2;; i = i * 0.98) {
		s = s + i;

		b = b + 1;
		if (s >= a) {
			break;
		}


	}
	cout << b;
	return 0;
}
