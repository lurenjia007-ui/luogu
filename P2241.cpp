#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int  n,m;
    cin>>n>>m;
    int  ans1=0,ans2=0,t;
    for(int x=0;x<=n;x++)
    {
        for(int y=0;y<=m;y++)
        {
            t=min(x,y)+min(n-x,m-y)+min(x,m-y)+min(n-x,y);
            ans1+=t;
            ans2+=n*m-t;
        }
    }
    cout<<ans1/4<<" "<<ans2/4<<endl;
    return 0;
}
