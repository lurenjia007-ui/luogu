#include <iostream>
using namespace std;

int main() {
	int a, b, m = 8, d = 0;
	cin >> a >> b;
	if (a + b > m)
		m = a + b,
		d = 1;
	cin >> a >> b;
	if (a + b > m)
		m = a + b,
		d = 2;
	cin >> a >> b;
	if (a + b > m)
		m = a + b,
		d = 3;
	cin >> a >> b;
	if (a + b > m)
		m = a + b,	d = 4;
	cin >> a >> b;
	if (a + b > m)
		m = a + b, d = 5;
	cin >> a >> b;
	if (a + b > m)
		m = a + b, d = 6;
	cin >> a >> b;
	if (a + b > m)
		m = a + b, d = 7;

	cout << d;
	return 0;
}
