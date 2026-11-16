#include <bits/stdc++.h>
using namespace std;

int isc(char  c) {
	if (c >= 'A' && c <= 'Z') {
		return 1;
	} else {
		return 0;
	}
}

int isl(char c) {
	if (c >= 'a' && c <= 'z') {
		return 1;
	} else {
		return 0;
	}
}

int isd(char c) {
	if (c >= '0' && c <= '9') {
		return 1;
	} else {
		return 0;
	}
}


int isok(string s) {
	int hasc = 0, hass = 0, hasd = 0, hasp = 0;
	if (s.size() < 6 || s.size() > 12) {
		return 0;
	}
	for (int i = 0; i < (int)s.size(); i++) {
		if (isc(s[i])) {
			hasc = 1;
		} else if (isl(s[i])) {
			hass = 1;
		} else if (isd(s[i])) {
			hasd = 1;
		} else if (s[i] == '!' || s[i] == '@' || s[i] == '#' || s[i] == '$') {
			hasp = 1;
		} else {
			return 0;
		}
	}
	if (!hasp || hasc + hass + hasd < 2) {
		return 0;
	}
	return 1;
}

int main() {
	string a, s = "";
	cin >> a;
	for (int i = 0; i < (int)a.size(); i++) {
		if (a[i] != ',') {
			s += a[i];
		} else {
			if (isok(s)) {
				cout << s << endl;
			}s="";
		}
	}
	if (isok(s)) {
		cout << s << endl;
	}
	return 0;
}
