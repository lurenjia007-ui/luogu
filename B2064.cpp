#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, a;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> a;
		if (a == 1) {
			cout << "1" << endl;
			continue;
		}
		if (a == 2) {
			cout << "1" << endl;
			continue;

		}
		int a1 = 1, a2 = 1, b = 0;
		for (int p = 3; p <= a; p++) {


			b = a1 + a2;
			a1 = a2;
			a2 = b;
		}
		cout << b << endl;
	}
	return 0;
}
