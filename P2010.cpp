#include <bits/stdc++.h>
#define int long long
using namespace std;

int d1, d2;

int f1(int y) {
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) return 1;
    return 0;
}

int f2(int y, int m) {
    if (m == 2) {
        if (f1(y)) return 29;
        else return 28;
    }
    if (m == 4 || m == 6 || m == 9 || m == 11) return 30;
    return 31;
}

signed main() {
    cin >> d1 >> d2;
    
    int y1 = d1 / 10000;
    int y2 = d2 / 10000;
    int ans = 0;
    
    for (int y = y1; y <= y2; y++) {
        int m = (y % 10) * 10 + (y / 10 % 10);
        int d = (y / 100 % 10) * 10 + (y / 1000);
        
        if (m >= 1 && m <= 12 && d >= 1 && d <= f2(y, m)) {
            int date = y * 10000 + m * 100 + d;
            if (date >= d1 && date <= d2) {
                ans++;
            }
        }
    }
    
    cout << ans << "\n";
    return 0;
}
