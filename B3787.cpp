#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;
	int e, f, g, h;
	char o;
	cin >> a >> o >> b >> o >> c >> o >> d;
	cin >> e >> o >> f >> o >> g >> o >> h;
	long long x1 = 360000 * a + 6000 * b + 100 * c + d;
	long long x2 = 360000 * e + 6000 * f + 100 * g + h;
	cout << x2 - x1 << endl;
	return 0;
}
