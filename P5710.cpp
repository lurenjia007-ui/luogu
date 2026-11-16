#include <iostream>
using namespace std;

int main() {
	int x, a, b;
	cin >> x;
	a = x % 2 == 0;
	b = 4 < x && x <= 12;
	cout << (a && b) << " "
	     << (a || b) << " "
	     << (a ^ b) << " " << !(a || b);
	return 0;
}
