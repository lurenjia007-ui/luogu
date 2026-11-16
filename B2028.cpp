#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a;
	cin >> a;
	cout << a % 10;
	cout << (a % 100 - a % 10) / 10;
	cout << (a % 1000 - a % 100) / 100;
	return 0;
}
