#include <bits/stdc++.h>
using namespace std;

int main() {
	string s1;
	cin >> s1;
	string s2;
	int a = 0;
	for (int i = s1.size() - 1; i >= 0; i--) {

		s2+= s1[i];
		a++;
	}
	if (s1 == s2) {
		cout << "yes";
	} else {
		cout << "no";
	}
	return 0;
}
