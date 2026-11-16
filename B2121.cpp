#include <bits/stdc++.h>
using namespace std;

int main() {
	string ss, s = "";
	string maxs, mins;
	int max = 0, min = 100000;
	getline (cin, ss);
	for (int i = 0; i < (int) ss.size(); i++) {
		if (ss[i] >= 'a' && ss[i] <= 'z' || 'A' <= ss[i] && ss[i] <= 'Z') {
			s = s + ss[i];
		} else {
			if (max < (int)s.size()) {
				max = (int)s.size();
				maxs = s;
			}
			if (min > (int)s.size() && (int)s.size() > 0) {
				min = (int)s.size();
				mins = s;
			}
			s = "";
		}
	}
	if (max < (int)s.size()) {
		max = (int)s.size();
		maxs = s;
	}
	if (min > (int)s.size() && (int)s.size() > 0) {
		min = (int)s.size();
			mins = s;
	}
	cout << maxs << endl << mins;
	return 0;
}
