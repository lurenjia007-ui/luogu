#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int n,m,t;
    string s;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n>>m>>s;
        int len=0;
        for(int j=0;j<s.size();j++)
        {
            if(s[j]=='1')
            {
                for(int k=j;k<s.size();j++)
                {
                    if(s[k]=='0')
                    {
                        len++;
                    }else 
                    break;
                }
            }else 
            {
                continue;
            }
            if(len>n)
            {
                cout<<"NO"<<endl;
                break;
            }else 
            {
                cout<<"YES"<<endl;
                break;
            
            }
        }
    }
    return 0;
}
