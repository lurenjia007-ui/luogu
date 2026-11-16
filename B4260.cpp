#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int y, m, d, h, k;
	cin >> y >> m >> d >> h >> k;
	if (h + k >= 24) {
		h = h + k - 24;
		if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && d == 31 && m != 12) {
			d = 1;
			m = m + 1;
		} else if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
		           && d == 31 && m == 12) {
			d = 1;
			m = 1;
			y = y + 1;
		} else if (m == 2 && (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) && d == 29) {
			d = 1;
			m = 3;
		} else if (m == 2 && (y % 4 != 0 || y % 100 == 0&& y % 400 != 0) && d == 28) {
			d = 1;
			m = 3;
		} else if((m==4||m==6||m==9||m==11)&&d==30){
			d=1;
			m=m+1;
		} else {
			d = d + 1;
		}
	} else {
		h = h + k;
	}
	cout << y << " " << m << " " << d << " " << h;
	return 0;
}
