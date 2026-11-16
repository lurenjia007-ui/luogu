#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, a, s = 0;
	cin >> n >> a;
	for (int i = 1; i <= n; i++) {
		int t = i;
		for (int j = 1; j <= 6; j++) {
			if (t % 10 == a) {
				s = s + 1;
			}
			t = t / 10;
			if (t <= 0) {
				break;
			}
		}

	}
	cout << s;
	return 0;
}



