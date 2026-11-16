#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	if (a == (a / 3) * 3 && a == (a / 5) * 5 && a == (a / 7) * 7) {
		cout << "3 5 7";
	}
	if (a == (a / 3) * 3 && a == (a / 5) * 5 && a > (a / 7) * 7) {
		cout << "3 5";
	}
	if (a > (a / 3) * 3 && a == (a / 5) * 5 && a == (a / 7) * 7) {
		cout << "5 7";
	}
	if (a == (a / 3) * 3 && a > (a / 5) * 5 && a == (a / 7) * 7) {
		cout << "3 7";
	}
	if (a == (a / 3) * 3 && a > (a / 5) * 5 && a > (a / 7) * 7) {
		cout << "3";
	}
	if (a > (a / 3) * 3 && a == (a / 5) * 5 && a > (a / 7) * 7) {
		cout << "5";
	}
	if (a > (a / 3) * 3 && a > (a / 5) * 5 && a == (a / 7) * 7) {
		cout << "7";
	}
	if (a > (a / 3) * 3 && a > (a / 5) * 5 && a > (a / 7) * 7) {
		cout << "n";
	}
	return 0;
}
