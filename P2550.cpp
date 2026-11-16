#include <iostream>
using namespace std;

int main() {
	int j[8];
	for (int i = 1; i <= 7; i++) {
		j[i] = 0;
	}
	int n;
	cin >> n;
	int k[8];
	for (int i = 1; i <= 7; i++) {
		cin >> k[i];
	}
	int h[8];
	for (int i = 1; i <= n; i++) {
		int z = 0;
		for (int t = 1; t <= 7; t++) {
			cin >> h[t];
			for (int y = 1; y <= 7; y++) {
				if (h[t] == k[y]) {
					z = z + 1;
				}
			}
		}
		if (z == 7)
			j[1] +=1 ;
		else if (z == 6)
			j[2] += 1;
		
		else if (z == 5)
			j[3] += 1;
		else if (z == 4)
			j[4] += 1;
		else if (z == 3)
			j[5] += 1;
		else if (z == 2)
			j[6] += 1;
		else if (z == 1)
			j[7] += 1;
	}
	for (int i = 1; i <= 7; i++) {
		cout << j[i]<<" ";
	}
	return 0;
}
