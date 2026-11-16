#include <iostream>
using namespace std;

int main() {
	int n, y;
	cin >> n >> y;
	if (y == 1 || y == 3 || y == 5 || y == 7
	 || y == 8|| y == 10 || y == 12) {
		cout << "31";
	} else if (n % 4 == 0 &&
	 n % 100 != 0 && y == 2 || n % 400 == 0 
	 && y == 2) {
		cout << "29";
	} else if (y == 2) {
		cout << "28";
	} else
		cout << "30";
	return 0;
}
