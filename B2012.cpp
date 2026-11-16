#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	double c;

	c = 1.0 * b / a * 100;
	printf("%.3f%%", c);
	return 0;
}
