#include <bits/stdc++.h>
#define int long long
using namespace std;
string s[100005];
signed main()
{
    int n;
    while(cin>>n,n)
    {
        for(int i=0;i<n;++i)
        {
            cin>>s[i];
        }
        int maxx=1e6;
        for(int i=1;i<n;++i)
        {
            int len=0;
            int t=min(s[i].size(),s[0].size());
            for(int j=1;j<=t;++j)
            {
                if(s[0][s[0].size()-j]==s[i][s[i].size()-j])
                {
                    len++;
                }
                else
                {
                    break;
                }
            }
                maxx=min(maxx,len);
        }
        cout<<s[0].substr(s[0].size()-maxx)<<endl;
    }
    return 0;
}
