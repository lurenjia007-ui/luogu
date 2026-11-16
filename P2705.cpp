#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b, c, d, e, s;
	cin >> a >> b >> c >> d >> e;
	if (c + d > e + e) {
		s = a * c + b * d;

	} else if (c + d < e + e && a > b) {
		s = 2 * b * e + (a - b) * c;

	} else
		s = 2 * a * e + (b - a) * d;
	cout << s;


	return 0;
}
