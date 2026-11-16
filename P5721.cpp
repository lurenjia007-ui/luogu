#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, a = 1;
	cin >> n;
	for (int i = n; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			if (a < 10) {
				cout << "0";
			}
			cout << a;
			a = a + 1;
		}
		cout << endl;

	}
	return 0;

}
