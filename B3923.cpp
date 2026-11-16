#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
	int a, b, m, n;
	cin >> a >> b >> m >> n;
	int s = a + b;
	for (int i = 3; i <= n; i++) {
		int q = a + b;
		s = s + q;
		if (q >= m) {
			break;
		}
		a = b;
		b = q;
	}
	cout << s;
	return 0;
}
