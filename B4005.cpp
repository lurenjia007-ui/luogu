#include <bits/stdc++.h>
#define int long long
using namespace std;

int a[100][100];

bool check(int x1, int y1, int x2, int y2)
{
    int b[2] = {0, 0};
    for (int i = x1; i <= x2; i++)
        for (int j = y1; j <= y2; j++)
            b[a[i][j]]++;
    return b[0] == b[1];
}

signed main()
{
    int n, m;
    cin >> n >> m;

    char c;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> c;
            a[i][j] = c - '0';
        }

    int ans = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            for (int ii = i; ii < n; ii++)
                for (int jj = j; jj < m; jj++)
                    if (check(i, j, ii, jj))
                        ans = max(ans, (ii - i + 1) * (jj - j + 1));

    cout << ans << endl;
    return 0;
}