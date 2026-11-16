#include <bits/stdc++.h>
#define int long long
using namespace std;
int r,c,k;
char mp[1005][1005];
signed main()
{
    cin>>r>>c>>k;
    for(int i=1;i<=r;++i)
    {
        for(int j=1;j<=c;++j)
        {
            cin>>mp[i][j];
        }
    }
    int ans=0;
    for(int i=1;i<=r;++i)
    {
        for(int j=1;j<=c;++j)
        {   
            if(k==1)
            {   
                if(mp[i][j]=='.')
                ans++;
                continue;
            }
            if(mp[i][j]=='#')
            {
                continue;
            }
            int ok=1;
            for(int b=1;b<k;++b)
            {
                if(mp[i+b][j]!='.')
            {
                ok=0;
            }
            }
            if(ok)
            {
                ans++;
            }
            ok=1;
            for(int b=1;b<k;++b)
            {
                if(mp[i][j+b]!='.')
            {
                ok=0;
            }
            }
            if(ok)
            {
                ans++;
            }
            
        }
    }
    cout<<ans<<endl;
    return 0;
}
