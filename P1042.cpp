#include <bits/stdc++.h>
#define int long long
using namespace std;
char a[100000];
int j = 1;

signed main() {
	int h=0, d=0;
	int j=1;
	while (1) {
		cin >> a[j];
		if (a[j] == 'W') {
			h = h + 1;
		} else if(a[j]=='L'){
			d = d + 1;
		}
		if (h >= 11 && h - d >= 2 || d >= 11 && d - h >= 2) {
			cout << h << ":" << d << endl;
			h = 0;
			d = 0;
		}
		if (a[j] == 'E') {
			cout << h << ":" << d << endl;
			j = 1;
			break;
		}
		j++;
	}
	cout << endl;h=0, d=0;
	while (1) {
		 
		if (a[j] == 'W') {
			h = h + 1;
		} else if(a[j]=='L'){
			d = d + 1;
		}
		if (h >= 21 && h - d >= 2 || d >= 21 && d - h >= 2) {
			cout << h << ":" << d << endl;
			h = 0;
			d = 0;
		}
		if (a[j] == 'E') {
			cout << h << ":" << d << endl;
			break;
		}
		j++;
	}
	return 0;
}
