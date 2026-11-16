#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        
        if (n == m) {
            cout << 0 << "\n";
        } else if ((n & m) == m) {
            cout << 1 << "\n";
        } else if ((n | m) == m) {
            cout << 1 << "\n";
        } else {
            cout << 2 << "\n";
        }
    }
    return 0;
}
