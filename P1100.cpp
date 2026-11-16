#include <bits/stdc++.h>
#define int long long
using namespace std;

string zhuan(int x) {
	string s = "";
	while (x > 0) {

		if (x % 2) {
			s = "1" + s;
		} else {
			s = "0" + s;
		}
		x = x / 2;
	}
	return s;
}

int hui(string s) {
	int ans = 0, p = 1;
	for (int i = s.size() - 1; i >= 0; i--) {
		if (s[i] == '1') {
			ans = ans + p;
		}
		p = p * 2;
	}
	return ans;
}

signed main() {
	int x;
	cin >> x;
	string s, t;
	s = zhuan(x);
	while (s.size() < 32) {
		s = "0" + s;
	}

	for (int j = 16; j < 32; j++) {
		t = t + s[j];
	}
	for (int a = 0; a < 16; a++) {
		t = t + s[a];
	}

	cout << hui(t);
	return 0;
}
