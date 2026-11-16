#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int c[100000];
	int  min = 99999;
	for (int i = 1; i < m; i++) {
		cin >> c[i];
	}
	for (int q = m; q <= n; q++) {
		cin >> c[q];
		int v = q;
		int h=0;
		for (int w = m; w >= 1; w--) {
			h = h + c[v];
			v--;
		}
		if (h < min) {
			min = h;
		}
	}
	cout << min;
	return 0;
}
