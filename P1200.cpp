#include <bits/stdc++.h>
using namespace std;

int main() {
	string s1, s2;
	int j1=1, j2=1;
	cin >> s1 >> s2;
	for (int x = 0; x <= s1.size() - 1; x++) {
		j1 = (s1[x] - 'A' + 1) * j1 % 47;
	}
	for (int x = 0; x <= s2.size() - 1; x++) {
		j2 = (s2[x] - 'A' + 1) * j2 % 47;
	}
	if (j1 == j2) {
		cout << "GO";
	} else {
		cout << "STAY";
	}
	return 0;
}
