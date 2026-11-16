#include <iostream>
using namespace std;

int main() {
	int x, y, z, q;
	cin >> x >> y >> z >> q;
	if (q > 2 * x + 5 * y + 3 * z) {
		cout << "Yes" << endl;
		cout << q - (2 * x + 5 * y + 3 * z);
	}
	if (q < 2 * x + 5 * y + 3 * z) {
		cout << "No" << endl;
		cout << 2 * x + 5 * y + 3 * z - q;
	}
	return 0;
}
