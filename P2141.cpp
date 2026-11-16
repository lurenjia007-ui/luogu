#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[99999];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int m = 0;
	for (int k = 0; k < n; k++) {
		int ok = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i != j && a[i] + a[j] == a[k]) {
					ok = 1;
					break;
				}
			}
			if (ok == 1)
				break;
		}
		if (ok == 1)
			m++;
	}
	cout << m << endl;
	return 0;
}
