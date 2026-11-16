#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int x, y, z, n, m;
	cin >> x >> y >> z >> n >> m;
	int p = n, s = m, w = 0;
	for (int i = 0; i <= m; i++) {
		for (int v = 0; v <= m - i; v++) {
			int k = m - i - v;
			if (k < 0) {
				continue;
			}
			if (k % z != 0) {
				continue;
			}
			int hua = i * x + v * y + k / z;
			if (hua == n) {
				w = w + 1;
			}
		}
	}
	cout << w;
	return 0;
}



