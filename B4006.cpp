#include <bits/stdc++.h>
#define int long long
using namespace std;

int a[1000000];

signed main() {
    int n, k;
    cin >> n >> k;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int ans = 0;
    
    for (int i = 0; i < n; i++) {
        int s = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] >= a[i] && a[j] - a[i] <= k) {
                s += a[j];
            }
        }
        if (s > ans) {
            ans = s;
        }
    }
    
    cout << ans << endl;
    return 0;
}
