#include <bits/stdc++.h>
#define int long long
using namespace std;
struct node {
    string s;
    int p, v;
    int ok;
} a[1005];
int cmp1(node x, node y) {
    if (x.v != y.v) return x.v < y.v;
    if (x.p != y.p) return x.p < y.p;
    return x.s < y.s;
}
int cmp2(node x, node y) {
    return x.s < y.s;
}
signed main() {
    int m, n;
    cin >> m >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].s >> a[i].p >> a[i].v;
        a[i].ok = 0;
    }
    sort(a + 1, a + n + 1, cmp1);
    for (int i = 1; i <= n; i++) {
        if (m >= a[i].p) {
            m -= a[i].p;
            a[i].ok = 1;
        }
    }
    node b[1005];
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i].ok == 1) {
            cnt++;
            b[cnt] = a[i];
        }
    }
    sort(b + 1, b + cnt + 1, cmp2);
    for (int i = 1; i <= cnt; i++) {
        cout << b[i].s << endl;
    }
    return 0;
}
