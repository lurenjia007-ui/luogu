#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, w = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int b = i; b <= n ; b++) {
			for (int c = b; c <= n; c++) {
				if (c * c == b * b + i * i) {
					w = w + 1;
				}
			}
		}
	}
	cout << w;
	return 0;
}



