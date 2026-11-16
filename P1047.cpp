#include <iostream>
using namespace std;

int main() {
	int l, m;
	cin >> l >> m;
	int s[100000], e[1000000], t[100000], sum = 0;
	for (int o = 0; o <= l; o++) {
		t[o] = 1;
	}
	for (int i = 1; i <= m; i++) {
		cin >> s[i] >> e[i];
		for (int p = s[i]; p <= e[i]; p++) {
			if (t[p] == 1) {
				sum = sum + 1;
				t[p] = 0;
			}
		}

	}
	cout << l+1-sum;
	return 0;
}
