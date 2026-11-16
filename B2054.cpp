#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int c = 0;
	for (int i = 1; i <= n; i++
	    ) {
		int a;
		cin >> a;
		c = c + a;
	}
	double v = c * 1.0 / n;
	printf( "%.2f", v);

	return 0;
}
