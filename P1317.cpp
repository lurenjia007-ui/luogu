#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[100000];
signed main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 1; i < n - 1; i++) {
        if (a[i] < a[i - 1] && a[i] < a[i + 1]) {
            ans++;
        }
        if (a[i] == a[i - 1] && a[i] < a[i + 1]) {
            int j = i - 1;
            while (j >= 0 && a[j] == a[i]) {
                j--;
            }
            if (j >= 0 && a[j] > a[i]) {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
