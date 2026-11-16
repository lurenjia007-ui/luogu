#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int n;
    cin >> n;
    while (n--) {
        int k;
        string s;
        cin >> k >> s;
        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            int d = 0;
            if (s[i] >= '0' && s[i] <= '9') {
                d = s[i] - '0';
            } else {
                d = s[i] - 'A' + 10;
            }
            ans = ans * k + d;
        }
        cout << ans << endl;
    }
    return 0;
}
