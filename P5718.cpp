#include <iostream>
using namespace std;

int main() {
	int n, b = 100000;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int a;
		cin >> a;
		if (a < b) {
			b = a;
		}
	}
	cout << b;
	return 0;
}
