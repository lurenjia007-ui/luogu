#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int n;
    cin >> n;
    int a[100005];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int c = 0;
    while (true) {
        int mx = -1, id = -1;
        int mn = 100000;
        
        for (int i = 0; i < n; i++) {
            if (a[i] >= mx) {
                mx = a[i];
                id = i;
            }
            if (a[i] > 0 && a[i] < mn) {
                mn = a[i];
            }
        }
        
        if (mx == 0) {
            break;
        }
        
        a[id] -= mn;
        c++;
    }
    
    cout << c << endl;
    return 0;
}
