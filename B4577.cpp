#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int n;
    cin >> n;
    int ans;
    cin >> ans;
    for (int i = 1; i < n; i++) {
        int x;
        cin >> x;
        ans &= x;
    }
    int cnt = 0;
    while (ans > 0) {
        if (ans & 1) {
            cnt++;
        }
        ans >>= 1;
    }
    cout << cnt << "\n";
    return 0;
}
