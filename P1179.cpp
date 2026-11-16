#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int l, r;
    cin >> l >> r;
    
    int ans = 0;
    for (int i = l; i <= r; i++) {
        int t = i;
        while (t > 0) {
            if (t % 10 == 2) {
                ans++;
            }
            t /= 10;
        }
    }
    
    cout << ans << endl;
    return 0;
}
