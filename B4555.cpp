#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[20005];
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    int mi[10];
    for(int i=0;i<=9;i++)
    {
        cin >> mi[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(i>1) cout << " ";
        cout << mi[a[i]];
    }
    return 0;
}
