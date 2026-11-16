#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int s = 0;

	for ( int i = a + 1; i <= b - 1; i++) {
		if (i % 4 == 0 && i % 100 != 0||i%400==0)
			s = s + i;
	}
	cout << s;
	return 0;
}
