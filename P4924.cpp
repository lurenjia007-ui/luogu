#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[500][500], b[500][500];
int n, m;
void f(int x, int y, int r, int z)
{
    if (z == 0)
    {
        for (int i = 0; i < 2 * r + 1; i++)
        {
            for (int j = 0; j < 2 * r + 1; j++)
            {
                b[x - r + j][y + r - i] = a[x - r + i][y - r + j];
            }
        }
    }
    else
    {
        for (int i = 0; i < 2 * r + 1; i++)
        {
            for (int j = 0; j < 2 * r + 1; j++)
            {
                b[x + r - j][y - r + i] = a[x - r + i][y - r + j];
            }
        }
    }
    for (int i = x - r; i <= x + r; i++)
    {
        for (int j = y - r; j <= y + r; j++)
        {
            a[i][j] = b[i][j];
        }
    }
}
signed main()
{
    cin >> n >> m;
    int c = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            a[i][j] = c;
            b[i][j] = c;
            c++;
        }
    }

    int x, y, r, z;
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y >> r >> z;
        f(x, y, r, z);
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
