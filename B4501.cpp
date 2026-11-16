#include <bits/stdc++.h>
#define int long long
using namespace std;

int h[100][100];

signed main() {
    int n, m;
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> h[i][j];
        }
    }

    int dx[8] = {-1, 1, 0, 0, -1, -1, 1, 1};
    int dy[8] = {0, 0, -1, 1, -1,  1, -1, 1};
    int ans = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int f = 1;
            for (int k = 0; k < 8; k++) {
                int nx = i + dx[k];
                int ny = j + dy[k];
                if (nx >= 0 && nx < n && ny >= 0 && ny < m && h[nx][ny] < h[i][j]) {
                    f = 0;
                    break;
                }
            }
            if (f == 1) {
                ans++;
            }
        }
    }

    cout << ans <<endl;
    return 0;
}
