#include <bits/stdc++.h>
#define int long long
using namespace std;
struct Node {
    int id, sum, mx, mn;
} a[10000];

int cmp(Node x, Node y) {
    if (x.sum != y.sum) return x.sum < y.sum;
    if (x.mx != y.mx) return x.mx < y.mx;
    if (x.mn != y.mn) return x.mn < y.mn;
    return x.id < y.id;
}
signed main() {
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        a[i].id = i;
        a[i].sum = 0;
        a[i].mx = -1;
        a[i].mn = 1e18;
        for (int j = 1; j <= k; j++) {
            int x;
            cin >> x;
            a[i].sum += x;
            if (x > a[i].mx) a[i].mx = x;
            if (x < a[i].mn) a[i].mn = x;
        }
    }
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= n; i++) {
        cout << a[i].id << " ";
    }
    return 0;
}
