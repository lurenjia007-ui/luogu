#include <iostream>
using namespace std;

int main() {
	int h, r;
	cin >> h >> r;
	double p = 3.14;
	double v = p * r * r * h;
	double n = (20000 / v) + 1;
	cout << (int)n;
	return 0;
}
