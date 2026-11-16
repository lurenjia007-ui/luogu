#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
	string s;
	cin >> s;
	int ans = 1;
	for (int i = 1; i < s.size(); i++) {
		if (s[i] == s[i - 1]) {
			ans++;
		} else {
			cout << ans;
			cout << s[i - 1];
			ans = 1;
		}
	}
	cout << ans << s[s.size() - 1];
	return 0;
}
