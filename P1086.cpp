#include <bits/stdc++.h>
#define int long long
using namespace std;

int x[500], y[500], w[500];

signed main() {
    int m, n, k;
    cin >> m >> n >> k;
    
    int c = 0;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            int v;
            cin >> v;
            if (v > 0) {
                c++;
                x[c] = i;
                y[c] = j;
                w[c] = v;
            }
        }
    }
    
    for (int i = 1; i < c; i++) {
        for (int j = 1; j <= c - i; j++) {
            if (w[j] < w[j + 1]) {
                swap(w[j], w[j + 1]);
                swap(x[j], x[j + 1]);
                swap(y[j], y[j + 1]);
            }
        }
    }
    
    int ans = 0, t = 0;
    int cx = 0, cy = y[1];
    
    for (int i = 1; i <= c; i++) {
        int d1 = abs(cx - x[i]) + abs(cy - y[i]);
        int d2 = x[i];
        
        if (t + d1 + d2 + 1 <= k) {
            t += d1 + 1;
            ans += w[i];
            cx = x[i];
            cy = y[i];
        } else {
            break;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}
