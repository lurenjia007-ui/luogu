#include <bits/stdc++.h>
#define int long long
using namespace std;
struct node {
    string s;
    int y, m, d, id;
} a[100000];
int cmp(node x, node y) {
    if (x.y != y.y) return x.y < y.y;
    if (x.m != y.m) return x.m < y.m;
    if (x.d != y.d) return x.d < y.d;
    return x.id > y.id;
}
signed main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].s >> a[i].y >> a[i].m >> a[i].d;
        a[i].id = i;
    }
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= n; i++) {
        cout << a[i].s << endl;
    }
    return 0;
}
