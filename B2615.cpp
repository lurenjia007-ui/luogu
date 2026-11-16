#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a, s1, s2;
	a = 10000;
	s1 = a * pow((1 + 0.035), 5);
	s2 = a * 0.04 * 5 + a;
	cout << s1;
	cout << " ";
	cout << s2;
	return 0;
}
