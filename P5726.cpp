#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, f1, f2, s, maxx, minn ;
	cin >> n >> f1;
	maxx = f1;
	minn = f1;
	s = f1;
	for (int i = 2; i <= n; i++) {
		cin >> f2;
		if (f2 > maxx) {
			maxx = f2;
		}
		if (f2 < minn) {
			minn = f2;
		}
		s = s + f2;
	}
	s = s - maxx - minn;
	printf("%.2f", 1.0 * s / (n - 2));
	return 0;
}
