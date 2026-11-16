#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 5000000;
int a[N], p[N], b[N], sum_b[N];
void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        p[i] = p[i - 1] + a[i];
    }
    for (int i = 1; i < n; i++) {
        b[i] = p[i];
    }
    if (n > 1) {
        sort(b + 1, b + n);
    }
    for (int i = 1; i < n; i++) {
        sum_b[i] = sum_b[i - 1] + b[i];
    }
    for (int k = 1; k <= n; k++) {
        if (k == 1) {
            cout << p[n] << (k == n ? "" : " ");
        } else {
            int ans = k * p[n] - sum_b[k - 1];
            cout << ans << (k == n ? "" : " ");
        }
    }
    cout << endl;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
