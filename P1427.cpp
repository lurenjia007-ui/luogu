#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a[102], w;
	for (int i = 1;; i++) {
		cin >> a[i];
		w = i;
		if (a[i] == 0) {
			break;
		}
	}
	for (int j = w; j > 0; j--) {
		if (a[j] != 0) {
			cout << a[j] << " ";
		}

	}
	return 0;
}


