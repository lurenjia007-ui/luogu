#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[100005], s[100005];
signed main() {
    int m, n;
    cin >> m >> n;
    for(int i = 1; i <= m; i++) a[i] = 1e18;
    for(int i = 1; i <= n; i++) {
        int k, p;
        cin >> k >> p;
        if(p < a[k]) a[k] = p;
    }
    int sum = 0;
    for(int i = 1; i <= m; i++) sum += a[i];
    cout << sum << endl;
    return 0;
}
