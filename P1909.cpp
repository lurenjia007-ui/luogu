#include <iostream>
using namespace std;

int main() {
	int n, a, b;
	cin >> n >> a >> b;
	int N = ((n + a - 1) / a);
	double f = N * b;

	cin >> a >> b;
	N = ((n + a - 1) / a);
	if ((N * b) < f) {
		f = N * b;
	}
	cin >> a >> b;
	N = ((n + a - 1) / a);
	if ((N * b) < f) {
		f = N * b;
	}
	cout << (int)f;
	return 0;
}
