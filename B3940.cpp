#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[1000][1000];
signed main() {
    int n;
    cin >> n;
    int x = 1, y = n / 2 + 1;
    a[x][y] = 1;
    for (int i = 2; i <= n * n; i++) {
        int nx = x - 1;
        int ny = y + 1;
        if (nx < 1) nx = n;
        if (ny > n) ny = 1;
        if (a[nx][ny] != 0) {
            nx = x + 1;
            ny = y;
            if (nx > n) nx = 1;
        }
        a[nx][ny] = i;
        x = nx;
        y = ny;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
