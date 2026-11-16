#include <bits/stdc++.h>
#define int long long
using namespace std;
char c;
int a[35];
signed main()
{
    while(cin>>c)
    {   
        if(c<='Z'&&c>='A')
        {
            a[c-'A']++;
        }    
    }
    int maxx=0,maxn;
    for(int i=0;i<26;++i)
    {
        if(a[i]>maxx)
        {
            maxx=a[i];
            maxn=i;
        }
    }
    for(int i=0;i<maxx;i++)
    {
        for(int j=0;j<26;j++)
        {
            if(maxx-a[j]<=i)
            {
                cout<<"*"<<" ";
            }else 
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    
    for(int i=0;i<26;i++)
    {
        char t='A'+i;
        cout<<t<<" ";
    }
    return 0;
}
