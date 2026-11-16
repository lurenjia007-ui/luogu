#include <iostream>
using namespace std;

int main() {
	int n, a, b = 1;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		b = b * a;

	}
	if (b > 1000000) {
		cout << ">1000000";
	} else
		cout << b << endl;

	return 0;
}
