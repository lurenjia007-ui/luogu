#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	double l1 = sqrt((a - c) * (a - c) + (b - d) * (b - d));
	double l2 = sqrt((a - e) * (a - e) + (b - f) * (b - f));
	double l3 = sqrt((c - e) * (c - e) + (d - f) * (d - f));
	double p = 1.0 * 1 / 2 * (l1 + l2 + l3),
	       s = sqrt(p * (p - l1) * (p - l2) * (p - l3)) + 0.5;

	cout << (int)s;
	return 0;
}
