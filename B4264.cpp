#include <bits/stdc++.h>
#define int long long
using namespace std;

int a[505][505];

signed main() {
    int n, m;
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    
    int ans = 0;
    
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (a[i][j] * a[i + 1][j + 1] == a[i][j + 1] * a[i + 1][j]) {
                ans++;
            }
        }
    }
    
    cout << ans << endl;
    return 0;
}
