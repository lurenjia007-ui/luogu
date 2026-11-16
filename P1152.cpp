#include <bits/stdc++.h>
#define int long long
using namespace std;

int a[100000];
int b[100000];

signed main() {
    int n;
    while (cin >> n) {
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        for (int i = 0; i <= n; i++) {
            b[i] = 0;
        }
        
        for (int i = 0; i < n - 1; i++) {
            int c = abs(a[i] - a[i + 1]);
            if (c >= 1 && c <= n - 1) {
                b[c] = 1;
            }
        }
        
        int ok = 1;
        for (int i = 1; i <= n - 1; i++) {
            if (b[i] == 0) {
                ok = 0;
                break;
            }
        }
        
        if (ok == 1) {
            cout << "Jolly" << endl;
        } else {
            cout << "Not jolly" << endl;
        }
    }
    return 0;
}
