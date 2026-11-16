#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, L, R;
	cin >> n >> L >> R;
	if (L / n == R / n) {
		cout << R % n;
	} else
		cout << n - 1;

	return 0;
}
