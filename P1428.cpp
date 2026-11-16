#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a[102], n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		int w = 0;
		for (int j = 1; j < i; j++) {

			if (a[j] < a[i]) {
				w = w + 1;
			}
		}
		cout << w << " ";
	}
	return 0;
}


