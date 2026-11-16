#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, a, y, b;
	cin >> x >> a >> y >> b;
	double m=1.0*(x * a - y * b) / (a - b);
    printf("%.2f",m);
	return 0;
}
