#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, p;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		p = i;
		if (i > ((n + 1) / 2)) {
			p = n + 1 - i;
		}
		for (int j = 1; j <= n; j++) {
			if (j == (n + 1) / 2 + 1 - p || j == (n + 1) / 2 - 1 + p) {
				cout << "#";
			} else
				cout << ".";
		}
		cout << endl;

	}
	return 0;
}



