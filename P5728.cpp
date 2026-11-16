#include <bits/stdc++.h>
using namespace std;
int a[1010][5];
int main() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i][0] >> a[i][1] >> a[i][2];
        a[i][3] = a[i][0] + a[i][1] + a[i][2];
    }
    int ct = 0;
    for (int x = 1; x < n; x++)
        for (int y = x + 1; y <= n; y++)
            if ( abs(a[x][0] - a[y][0]) <= 5
                && abs(a[x][1] - a[y][1]) <= 5
                && abs(a[x][2] - a[y][2]) <= 5
                && abs(a[x][3] - a[y][3]) <= 10 )
                ct++;
    cout << ct;
    return 0;
}
