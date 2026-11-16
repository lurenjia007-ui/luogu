#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, s = 0;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			if (i % j == 0) {
				s = s + j;
			}



		}
		if (s == i) {
			cout << i << endl;
		}

		s = 0;
	}
	return 0;
}



