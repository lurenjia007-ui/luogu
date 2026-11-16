#include <iostream>
using namespace std;

int main() {
	double m, h;
	cin >> m >> h;
	double a = m / (h * h);
	if (a > 24) {
		printf("%.6g\n", a);
		cout << "Overweight";
	}
	if (a < 18.4) {
		cout << "Underweight";
	}
	if (a > 18.4 && a < 24) {
		cout << "Normal";
	}
	return 0;
}
