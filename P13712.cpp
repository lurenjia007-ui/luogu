#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int t;
    cin >> t;
    while(t--){
        int x, y, a, b, c, d;
        cin >> x >> y >> a >> b >> c >> d;
        
        if(x == y){
            cout << "0\n";
            continue;
        }
        
        int ans = 1e18;
        
        if((x & a) == y) {
            ans = min(ans, c);
        }
        if((x | b) == y) {
            ans = min(ans, d);
        }
        if(((x | b) & a) == y || ((x & a) | b) == y) {
            ans = min(ans, c + d);
        }
        
        if(ans == 1e18) cout << "-1\n";
        else cout << ans << "\n";
    }
    return 0;
}
