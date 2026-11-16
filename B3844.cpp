#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	char a = 'A', b;
	for (int i = 1; i <= n; i++) {
		b = a;
		for (int j = 1; j <= n; j++) {
			cout << b;
			b = b + 1;
			if (b > 'Z') {
				b = 'A';
			}

		}
		a = a + 1;
		if (a > 'Z') {
			a = 'A';
		}
		cout << endl;
	}
	return 0;

}
