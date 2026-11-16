#include <bits/stdc++.h>
#define int long long
using namespace std;

int a[10000];

signed main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                ans++;
            }
        }
    }
    
    cout << ans << endl;
    return 0;
}
