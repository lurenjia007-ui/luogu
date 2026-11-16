#include <bits/stdc++.h>
#define int long long
using namespace std;
struct node {
    int k, s;
} a[50000];
int cmp(node x, node y) {
    if (x.s != y.s) {
        return x.s > y.s;
    }
    return x.k < y.k;
}
signed main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].k >> a[i].s;
    }
    sort(a + 1, a + n + 1, cmp);
    int line = m * 15 / 10;
    int score = a[line].s;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i].s >= score) {
            cnt++;
        }
    }
    cout << score << " " << cnt << endl;
    for (int i = 1; i <= cnt; i++) {
        cout << a[i].k << " " << a[i].s << endl;
    }
    return 0;
}
