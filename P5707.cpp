#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int s, v;
	cin >> s >> v;
	int t = 1.0 * s / v + 10 + 0.999999;
	int p = 480 + 24 * 60;
	p = p - t;
	if (p >= 60 * 24) {
		p = p - 60 * 24;
	}
	int h = p / 60;
	int m = p % 60;
	if (h < 10) {
		cout << "0";
	}
	cout << h << ":";
	if (m < 10) {
		cout << "0";
	}
	cout << m;
	return 0;
}
