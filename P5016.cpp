#include <bits/stdc++.h>
#define int long long
using namespace std;
int n;
int c[100005];
int m,p1,s1,s2;
int sl=0,sh=0;
signed main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>c[i];
    }
    cin>>m>>p1>>s1>>s2;
    for(int i=1;i<m;i++)
    {
        sl=sl+c[i]*(m-i);
    }
    for(int i=m+1;i<=n;i++)
    {
        sh=sh+c[i]*(i-m);
    }
    if(p1<m)
    {
        sl=sl+s1*(m-p1);
    }else if(p1>m)
    {
        sh=sh+s1*(p1-m);
    }
    int cha=sl-sh;
    int ans = m;
    int min_diff = abs(cha);
    if(cha==0)
    {
        cout<<m<<endl;
        return 0;
    }else if(cha>0)
    {   
        for(int i=m+1;i<=n;++i)
        {
            int new_diff = abs(cha - s2*(i-m));
            if(new_diff < min_diff)
            {
                min_diff = new_diff;
                ans = i;
            }
        }
    }else if(cha<0)
    {
        for(int i=1;i<m;++i)
        {
            int new_diff = abs(cha + s2*(m-i));
            if(new_diff < min_diff)
            {
                min_diff = new_diff;
                ans = i;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}