#include <bits/stdc++.h>
#define int long long
using namespace std;

int f1(int x) {
    if (x <= 1) return 0;
    if (x == 2) return 1;
    if (x % 2 == 0) return 0;
    for (int i = 3; i * i <= x; i += 2) {
        if (x % i == 0) return 0;
    }
    return 1;
}

int f2(int x) {
    int t = x, r = 0;
    while (t > 0) {
        r = r * 10 + t % 10;
        t /= 10;
    }
    return r == x;
}

signed main() {
    int a, b;
    cin >> a >> b;
    
    if (a % 2 == 0) a++;
    
    for (int i = a; i <= b; i += 2) {
        if (i > 10000000) break;
        
        if (f2(i) && f1(i)) {
            cout << i << "\n";
        }
    }
    
    return 0;
}
