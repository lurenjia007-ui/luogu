#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a1, a2, a3, a4, a5;
	cin >> a1 >> a2 >> a3 >> a4 >> a5;
	int e = 0;
	//第一次分
	e = e + a1 % 3;
	a1 = a1 / 3;
	a2 = a2 + a1;
	a5 = a5 + a1;

	//第二次
	e = e + a2 % 3;
	a2 = a2 / 3;
	a1 = a1 + a2;
	a3 = a3 + a2;

	//第三次
	e = e + a3 % 3;
	a3 = a3 / 3;
	a2 = a2 + a3;
	a4 = a4 + a3;

	//第四次
	e = e + a4 % 3;
	a4 = a4 / 3;
	a3 = a3 + a4;
	a5 = a5 + a4;

	//第五次
	e = e + a5 % 3;
	a5 = a5 / 3;
	a4 = a4 + a5;
	a1 = a1 + a5;
	cout << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a5 << endl << e;
	return 0;
}
