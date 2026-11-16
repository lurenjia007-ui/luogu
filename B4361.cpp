#include <bits/stdc++.h>
#define int long long
using namespace std;
struct stu
{
int h,w;
}x[100000];
int cmp(stu x,stu y)
{
    if(x.h!=y.h)
    {
    return x.h>y.h;    
    }
    return x.w>y.w;
}
signed main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    cin>>x[i].h>>x[i].w;
    }
    int ans=0;
    for(int i=1;i<=n-1;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
        if(cmp(x[j],x[i]))
        {
            ans++;
        }
        }
    }
    cout<<ans<<endl;
    return 0;
}
