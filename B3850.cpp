#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        
        int s = 0;
        int p = 1;
        
        while (x > 0) {
            int d = x % 10;
            if (p % 2 == 1) {
                int v = d * 7;
                while (v > 9) {
                    int t = 0;
                    while (v > 0) {
                        t += v % 10;
                        v /= 10;
                    }
                    v = t;
                }
                s += v;
            } else {
                s += d;
            }
            x /= 10;
            p++;
        }
        
        if (s % 8 == 0) {
            cout << "T" << endl;
        } else {
            cout << "F" << endl;
        }
    }
    
    return 0;
}
