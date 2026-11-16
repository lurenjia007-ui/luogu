#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int z = 0;
	for (int i = 1; i <= n; i++) {
		z = z + i * i;
	}
	cout << z;
	return 0;
}
