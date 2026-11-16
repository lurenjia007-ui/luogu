#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m,ans=1000000000,w[1000],b[1000],r[1000];
string s;
int check(char c)
{
    int tot=0;
    for(int i=0;i<m;++i)
    {
        if(s[i]!=c)
        {
            ++tot;
        }
    }
    return tot;
}
signed main()
{
    cin>>n>>m;
    for(int i=1;i<=n;++i)
    {
        cin>>s;
        w[i]=w[i-1]+check('W');
        b[i]=b[i-1]+check('B');
        r[i]=r[i-1]+check('R');
    }
    for (int i=1;i<n-1;++i)
    {
        for(int j=i+1;j<n;++j)
        {
            ans=min(ans,w[i]+b[j]-b[i]+r[n]-r[j]);
        }
    }
    cout<<ans;
    return 0;
}
