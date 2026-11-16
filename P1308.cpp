#include <bits/stdc++.h>
using namespace std;

int main() {
	string s, t;
	getline(cin, s);
	getline(cin, t);
	s = ' ' + s + ' ';
	t = ' ' + t + ' ';
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] += 32;
		}
	}
	for (int i = 0; i < t.size(); i++) {

		if (t[i] >= 'A' && t[i] <= 'Z') {
			t[i] += 32;
		}
	}
	int a = -1, c = 0, b;
	while (1) {
		a = t.find(s, a + 1);
		if (a == -1) {
			break;
		}
		c++;
		if (c == 1) {
			b = a;
		}
	}
	if (c > 0) {
		cout << c << " " << b << endl;
	}else cout<<"-1";
	return 0;
}
