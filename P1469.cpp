#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    int ans = 0; 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ans ^= x; 
    }
    
    cout << ans << "\n";
    
    return 0;
}
