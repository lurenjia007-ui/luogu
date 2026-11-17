#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[505][505];

signed main()
{
    int n, m, q;
    cin >> n >> m >> q;
    for(int i = 0; i < q; i++)
    {
        int r, c;
        cin >> r >> c;
        a[r][c] = -1;
    }   
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(a[i][j] == -1)
            {
                cout << "*";
            }
            else
            {
                int cnt = 0;
                for(int x = -1; x <= 1; x++)
                {
                    for(int y = -1; y <= 1; y++)
                    {
                        if(x == 0 && y == 0) continue;
                        if(a[i + x][j + y] == -1) cnt++;
                    }
                }
                cout << cnt;
            }
            if(j < m) cout << " ";
        }
        cout << "\n";
    }
    return 0;
}