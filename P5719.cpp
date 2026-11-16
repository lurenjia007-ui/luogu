#include <iostream>
using namespace std;

int main() {
	int a, b, c = 0, c1 = 0, d = 0, d1 = 0;
	cin >> a >> b;
	for (int i = 1; i <= a; i++) {
		if (i % b == 0) {
			c = c + i;
			c1 = c1 + 1;
		} else {
			d = d + i;
			d1 = d1 + 1;
		}

	}
	double s1 = 1.0 * c / c1, s2 = 1.0 * d / d1;
	printf("%.1f", s1);
	cout << " ";
	printf("%.1f", s2);
	return 0;
}
