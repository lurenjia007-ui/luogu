#include <iostream>
using namespace std;

int main() {
	int m, a, b, p = 0;
	cin >> m >> a >> b;
	for (int i = a; i <= b; i++) {
		if (i % m == 0 || i % 10 == m) {
			p = p + i;
		}
	}
	cout << p;
	return 0;
}
