#include <iostream>
using namespace std;

int main() {
	int n, a[103], s = 0;
	int x;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	cin >> x;
	for (int p = 1; p <= n; p++) {
		if (x >= a[p]) {
			s = s + 1;
			x = x - a[p];
		}
	}
	cout << s;
	return 0;
}
