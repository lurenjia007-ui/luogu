#include <iostream>
#include <cmath>
using namespace std;

int main() {
	char a, b, c, d, e, f, g, h;
	scanf("%c%c%c%c%c%c%c%c", &a, &b, &c, &d, &e, &f, &g, &h);

	int w = 0;
	if (h >= '0' && h <= '9') {
		w = h - '0';

	} else if (g >= '0' && g <= '9') {
		w = g - '0';

	} else if (f >= '0' && f <= '9') {
		w = f - '0';

	} else if (e >= '0' && e <= '9') {
		w = e - '0';

	} else if (d >= '0' && d <= '9') {
		w = d - '0';

	}
	if (a != 'M' || b != 'D' || c != 'A') {
		cout << "1 1 1 1 1";
	} else {
		int m1 = 0, m2 = 0, m3 = 0, m4 = 0, m5 = 0;
		if (w == 1 || w == 9)
			m1 = 1;
		if (w == 2 || w == 8)
			m2 = 1;
		if (w == 3 || w == 7)
			m3 = 1;
		if (w == 4 || w == 6)
			m4 = 1;
		if (w == 5 || w == 0)
			m5 = 1;
		cout << m1 <<" "<< m2 <<" "<< m3 <<" "<< m4 <<" "<< m5;

	}

	return 0;
}
