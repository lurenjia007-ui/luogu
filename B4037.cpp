#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cout << "+";
		for (int j = 3; j <= n; j++) {
			if (j - 2 == i - 1) {
				cout << "+";
			} else
				cout << "-";
		}
		cout << "+" << endl;
	}
	return 0;
}



