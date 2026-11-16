#include <bits/stdc++.h>
#define int long long
using namespace std;

int f1(int x) {
    if (x <= 1) return 0;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return 0;
    }
    return 1;
}

int f2(int x) {
    int a = 0;
    while (x > 0) {
        a = a * 10 + x % 10;
        x /= 10;
    }
    return a;
}

signed main() {
    int m, n;
    cin >> m >> n;
    
    int c = 0;
    for (int i = m; i <= n; i++) {
        if (f1(i) == 1 && f1(f2(i)) == 1) {
            c++;
            if (c > 1) cout << ",";
            cout << i;
        }
    }
    
    if (c == 0) cout << "No";
    
    return 0;
}
