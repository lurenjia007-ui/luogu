#include <iostream>
using namespace std;

int main() {
	int s, a, d = 0;
	cin >> s;
	for (int i = 1; i * i <= s; i++) {
		if (s % i == 0) {
			a = s / i;
			d = d + 1;
		}
	}
	cout << d;
	return 0;
}
