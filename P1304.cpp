#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int n;
    cin >> n;
    
    for (int i = 4; i <= n; i += 2) {
        for (int j = 2; j <= i / 2; j++) {
            int f1 = 1, f2 = 1;
            
            for (int k = 2; k * k <= j; k++) {
                if (j % k == 0) {
                    f1 = 0;
                    break;
                }
            }
            
            int m = i - j;
            for (int k = 2; k * k <= m; k++) {
                if (m % k == 0) {
                    f2 = 0;
                    break;
                }
            }
            
            if (f1 == 1 && f2 == 1) {
                cout << i << "=" << j << "+" << m << endl;
                break;
            }
        }
    }
    
    return 0;
}
