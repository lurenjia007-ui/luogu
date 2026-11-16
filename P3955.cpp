#include <bits/stdc++.h>
#define int long long
using namespace std;

int a[1005];

signed main() {
    int n, q;
    cin >> n >> q;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a, a + n);
    
    for (int i = 0; i < q; i++) {
        int l, x;
        cin >> l >> x;
        
        int p = 1;
        for (int j = 0; j < l; j++) {
            p *= 10;
        }
        
        int ans = -1;
        for (int j = 0; j < n; j++) {
            if (a[j] % p == x) {
                ans = a[j];
                break;
            }
        }
        
        cout << ans << endl;
    }
    
    return 0;
}
