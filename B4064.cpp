#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin >> t;
	long long a;
	int b;
	for (int i = 1; i <= t; i++) {
		cin >> a;
		b = sqrt(sqrt(a));
		if (b * b * b * b == a) {
			cout << b << endl;
		} else {
			cout << "-1" << endl;
		}
	}
	return 0;
}
