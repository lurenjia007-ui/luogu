#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int maxx = 0, minn = 100000;
	int a[26] = {0};
	for (int i = 0;; i++) {
		if (s[i] == '\0') {
			break;
		}
		a[s[i] - 'a']++;
		
	}
	for(int i=0;i<=25;i++){
		if (a[i] > maxx) {
			maxx = a[i];
		}
		if (a[i] < minn&&a[i]>0) {
			minn = a[i];
		}
	}
	int f = 1;
	if (maxx - minn <= 1) {
		f = 0;
	}
	for (int i = 2; i * i <= maxx - minn; i++) {
		if (maxx - minn % i == 0) {
			f = 0;
			break;
		}
	}
	if (f) {
		cout << "Lucky Word" << endl << maxx - minn;
	} else {
		cout << "No Answer" << endl << "0";
	}
	return 0;
}
