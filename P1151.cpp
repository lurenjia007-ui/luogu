#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int k;
	cin >> k;
	int c1, c2, c3, c4, c5, s1, s2, s3, w = 0;
	for (int i = 10000; i <= 30000; i++) {
		c1 = i % 10;
		c2 = (i / 10) % 10;
		c3 = (i / 100) % 10;
		c4 = (i / 1000) % 10;
		c5 = (i / 10000) % 10;
		s1 = c5 * 100 + c4 * 10 + c3;
		s2 = c4 * 100 + c3 * 10 + c2;
		s3 = c3 * 100 + c2 * 10 + c1;
		if (s1 % k == 0 && s2 % k == 0 && s3 % k == 0) {
			cout << i << endl;
			w = w + 1;
		}

	}
	if (w == 0) {
		cout << "No";
	}
	return 0;
}



