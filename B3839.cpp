#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int b = 0, a = n;
	for (int i = 1; i <= n; i++) {
		b = b + i * a;
		a--;
	}
	cout << b;
	return 0;
}
