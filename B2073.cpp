#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long long a, b, d;
	cin >> a >> b;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		a = a * 10;
		d= (a / b)%10;
		a = a % b;
	}
	cout << d;
	return 0;
}


