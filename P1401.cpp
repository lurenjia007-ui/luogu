#include <iostream>
#include <string>
using namespace std;

int main() {
	long long a1, a2, b1, b2;
	cin>>a1>>a2>>b1>>b2;
	long long a, b, c, d;
	a = a1 * b1;
	b = a2 * b1;
	c = a1 * b2;
	d = a2 * b2;
	if (a < b)
		swap(a, b);
	if (a < c)
		swap(a, c);
	if (a < d)
		swap(a, d);
	if (b > c)
		swap(b, c);
	if (b > d)
		swap(b, d);
	if (b > a)
		swap(b, a);
	if (a > 2147483647 || b < -2147483648) {
		cout << "long long int";
	} else
		cout << "int";
	return 0;
}
