#include <bits/stdc++.h>
#define int long long
using namespace std;

string a[100000];

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        sort(a, a + n);
        
        string s = "";
        for (int i = 0; i < n; i++) {
            s += a[i];
        }
        
        int ok = 1;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] < s[i - 1]) {
                ok = 0;
                break;
            }
        }
        
        cout << ok << endl;
    }
    return 0;
}
