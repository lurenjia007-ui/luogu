#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[10000][10000];
int b[10000][10000];
signed main() {
    int m, n, sx, sy;
    cin >> m >> n >> sx >> sy;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j] >> b[i][j];
        }
    }
    int x = sx;
    int y = sy;
    while (1) {
        cout << x << " " << y << "\n";
        if (a[x][y] == 0 && b[x][y] == 0) {
            break;
        }
        int nx = a[x][y];
        int ny = b[x][y];
        x = nx;
        y = ny;
    }
    return 0;
}
