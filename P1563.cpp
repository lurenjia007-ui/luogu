#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m;

struct node
{
    int face;
    string name;
}a[100000];

signed main()
{
    cin>>n>>m;
    for(int i=0;i<n;++i)
    {
        cin>>a[i].face>>a[i].name;
    }
    int b=0;
    for(int i=1;i<=m;++i)
    {
        int x,s;
        cin>>x>>s;
        if(a[b].face==x)
        {
            b=(b+n-s)%n;
        }else
        {
            b=(b+s)%n;
        }
    }
    cout<<a[b].name<<endl;
    return 0;
}
