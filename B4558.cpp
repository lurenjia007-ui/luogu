#include <bits/stdc++.h>
#define int long long
using namespace std;
struct Node {
    int id;
    double bmi;
};
Node a[1005];
bool cmp(Node x, Node y)
{
    return x.bmi > y.bmi;
}
signed main()
{
    int n;
    cin >> n;
    int w[1005];
    double h[1005];
    for(int i = 0; i < n; i++)
    {
        cin >> w[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    for(int i = 0; i < n; i++)
    {
        a[i].id = i + 1;
        a[i].bmi = w[i] / h[i] / h[i];
    }
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++)
    {
        if(i)
        {
            cout << ' ';
        }
        cout << a[i].id;
    }
    cout << endl;
    return 0;
}