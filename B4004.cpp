#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[100000];
        int m = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] > m) {
                m = a[i];
            }
        }
        
        int f = 1;
        for (int i = 0; i < n; i++) {
            if (m % a[i] != 0) {
                f = 0;
                break;
            }
        }
        
        if (f == 1) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
