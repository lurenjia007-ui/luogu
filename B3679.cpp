#include <bits/stdc++.h>
#define int long long
using namespace std;
struct node {
    int x, y, id;
} p[100000];
int u[100000];
int v[100000];
int f[100000];
signed main() {
    int n, k, t;
    cin >> n >> k >> t;
    for (int i = 1; i <= n; i++) {
        cin >> p[i].x >> p[i].y;
        p[i].id = i;
    }
    for (int i = 1; i <= k; i++) {
        int x, y;
        cin >> x >> y;
        for (int j = 1; j <= n; j++) {
            if (p[j].x == x && p[j].y == y) {
                f[p[j].id] = 1;
                break;
            }
        }
    }
    for (int i = 1; i <= t; i++) {
        cin >> u[i] >> v[i];
    }
    int ans = 0;
    for (int i = 1; i <= t; i++) {
        int d = -1;
        int id = -1;
        for (int j = 1; j <= n; j++) {
            int dis = (p[j].x - u[i]) * (p[j].x - u[i]) + (p[j].y - v[i]) * (p[j].y - v[i]);
            if (dis > d) {
                d = dis;
                id = p[j].id;
            } else if (dis == d) {
                if (p[j].id < id) {
                    id = p[j].id;
                }
            }
        }
        if (f[id] == 1) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
