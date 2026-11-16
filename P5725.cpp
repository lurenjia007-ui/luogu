#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, a = 1;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (a < 10) {
				cout << "0";
			}

			cout << a;
			a = a + 1;
		}
		cout << endl;

	}
	cout << endl;
	a = 1;
	for (int p = 1; p <= n; p++) {
		for (int l = 1; l <= n - p; l++) {
			cout << "  ";
		}
		for (int y = 1; y <= p; y++) {
			if (a < 10) {
				cout << "0";
			}
			cout << a;
			a++;
		}
		cout << endl;

	}
	return 0;
}



