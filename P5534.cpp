#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long long a, b;
	int n;
	cin >> a >> b >> n;
	long long d = b - a;


	long long an = a + (n - 1) * d;
	long long s = n*(a + an) / 2 ;
	cout << s << endl;
	return 0;
}
