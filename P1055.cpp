#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
	char a1, a2, a3, a4, a5, a6, a7, a8, a9, x;
	scanf("%c-%c%c%c-%c%c%c%c%c-%c", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &x);
	int s = (a1 - '0') + 2 * (a2 - '0') + 3 * (a3 - '0') + 4 * (a4 - '0') + 5 * (a5 - '0') + 6 * (a6 - '0') + 7 *
	        (a7 - '0') + 8 * (a8 - '0') + 9 * (a9 - '0');
	int p = s % 11;
	if ( (p == 10 && x == 'X') || p + '0' == x ) {
		cout << "Right" << endl;
		return 0;
	} else {
		if (p == 10) {
			x = 'X';
		} else {
			x = p + '0';
		}
	}
	printf("%c-%c%c%c-%c%c%c%c%c-%c", a1, a2, a3, a4, a5, a6, a7, a8, a9, x);
	return 0;
}
