#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
	int n, a, b, s = 1, m = 1;
	cin >> n >> a;
	for (int i = 2; i <= n; i++) {
		cin >> b;
		if (b == a + 1) {
			s = s + 1;
		} else {
			s = 1;
		}
		if (s > m) {
			m = s;
		}
		a = b;
	}
	cout << m;
	return 0;
}
