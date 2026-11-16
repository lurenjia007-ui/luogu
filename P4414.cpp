#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c;
	string s;
	cin >> s;
	if (a > b) {
		d = a;
		a = b;
		b = d;
	}
	if (a > c) {
		d = a;
		a = c;
		c = d;
	}
	if (b > c) {
		d = b;
		b = c;
		c = d;
	}
	if (s == "ABC" ) {
		cout << a << " " << b << " " << c;
	}
	if (s == "BAC") {
		cout << b << " " << a << " " << c;
	}
	if (s == "ACB" ) {
		cout << a << " " << c << " " << b;
	}
	if (s == "CAB") {
		cout << c << " " << a << " " << b;
	}
	if (s == "BCA") {
		cout << b << " " << c << " " << a;
	}
	if (s == "CBA") {
		cout << c << " " << b << " " << a;
	}
	return 0;
}
