#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, a = 1, s = 0;
	cin >> n;
	int r = n;
	for (int i = 1; i <= n; i++) {
		if (r >= i) {
			s = s + i * i;
			r = r - i;
		} else {
			s = s + r * i;
			break;
		}
	}
	cout << s;
	return 0;
}



