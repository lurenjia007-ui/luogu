#include <iostream>
using namespace std;

int a[105][105];

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        a[x][y] = 1;

        int tx[8] = {0, 0, 1, -1, 2, -2, 0, 0};
        int ty[8] = {1, -1, 0, 0, 0, 0, 2, -2};
        for (int j = 0; j < 8; j++) {
            int nx = x + tx[j];
            int ny = y + ty[j];
            if (nx >= 1 && nx <= n && ny >= 1 && ny <= n) {
                a[nx][ny] = 1;
            }
        }

        int cx[4] = {1, 1, -1, -1};
        int cy[4] = {1, -1, 1, -1};
        for (int j = 0; j < 4; j++) {
            int nx = x + cx[j];
            int ny = y + cy[j];
            if (nx >= 1 && nx <= n && ny >= 1 && ny <= n) {
                a[nx][ny] = 1;
            }
        }
    }

    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        for (int dx = -2; dx <= 2; dx++) {
            for (int dy = -2; dy <= 2; dy++) {
                int nx = x + dx;
                int ny = y + dy;
                if (nx >= 1 && nx <= n && ny >= 1 && ny <= n) {
                    a[nx][ny] = 1;
                }
            }
        }
    }

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] == 0) {
                sum++;
            }
        }
    }

    cout << sum << endl;
    return 0;
}
