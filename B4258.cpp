#include <iostream>
using namespace std;

int main() {
	int n, a, b;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		b = (a + 5) / 10 * 10;
		cout << b << endl;
	}
	return 0;
}
