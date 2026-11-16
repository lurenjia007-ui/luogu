#include <bits/stdc++.h>
#define int long long
using namespace std;

char c[1005][1005];
int b[1005][1005];

signed main() {
    int n, m;
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> c[i][j];
        }
    }
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (c[i-1][j] == '#') {
                b[i][j]++;
            }
            if (c[i+1][j] == '#') {
                b[i][j]++;
            }
            if (c[i][j-1] == '#') {
                b[i][j]++;
            }
            if (c[i][j+1] == '#') {
                b[i][j]++;
            }
        }
    }
    
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (c[i][j] == '.' && b[i][j] == 0) {
                ans++;
            }
        }
    }
    
    int mx = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (c[i][j] == '#') {
                int s = 0;
                
                if (b[i][j] == 0) {
                    s = 1; 
                    if (c[i-1][j] == '.' && b[i-1][j] == 1) {
                        s++;
                    }
                    if (c[i+1][j] == '.' && b[i+1][j] == 1) {
                        s++;
                    }
                    if (c[i][j-1] == '.' && b[i][j-1] == 1) {
                        s++;
                    }
                    if (c[i][j+1] == '.' && b[i][j+1] == 1) {
                        s++;
                    }
                }
                
                if (s > mx) {
                    mx = s;
                }
            }
        }
    }
    
    cout << ans + mx << endl;
    return 0;
}
