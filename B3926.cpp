#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int n;
    cin >> n;
    while (n--) {
        int x;
        string u1, e1, q, u2;
        cin >> x >> u1 >> e1 >> q >> u2;
        int ans = x;
        if (u1 == "km" && u2 == "mm") ans = x * 1000000;
        else if (u1 == "m" && u2 == "mm") ans = x * 1000;
        else if (u1 == "km" && u2 == "m") ans = x * 1000;
        else if (u1 == "kg" && u2 == "mg") ans = x * 1000000;
        else if (u1 == "g" && u2 == "mg") ans = x * 1000;
        else if (u1 == "kg" && u2 == "g") ans = x * 1000;
        cout << x << " " << u1 << " = " << ans << " " << u2 << "\n";
    }
    return 0;
}
