#include <iostream>
using namespace std;

int main() {
	int h1, h2, m1, m2;
	cin >> h1 >> m1 >> h2 >> m2;
	int t1 = 60 * h1 + m1,
	    t2 = 60 * h2 + m2;
	cout << t2 - t1;
	return 0;
}
