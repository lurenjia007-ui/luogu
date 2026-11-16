#include <bits/stdc++.h>
#define int long long
using namespace std;
int t;
string fu,a,b;
int suan(string c)
{   
    int n;
    if(c[0]=='a')
    {
    n=stoi(a)+stoi(b);
    }else if(c[0]=='b')
    {
        n=stoi(a)-stoi(b);
    }else if(c[0]=='c' )
    {
        n=stoi(a)*stoi(b);
    }
    return n;
}
char zhuan(string f)
{
    char p;
    if(f[0]=='a')
    {
        return '+';
    }else if(f[0]=='b')
    {
        return '-';
    }else if(f[0]=='c')
    {
        return '*';
    }
}

signed main()
{
    cin>>t;
    cin>>fu;
    int ans;
    for(int i=0;i<t;++i)
    {   int len;
        cin>>a;
        if(a[0]>='a'&&a[0]<='c')
        {   
            fu=a;
            cin>>a>>b;
        }else 
        {
            cin>>b;
        }
        ans=suan(fu);
        len=a.size()+1+b.size()+1+to_string(ans).size();
        cout<<a<<zhuan(fu)<<b<<"="<<ans<<endl<<len<<endl;
    }
    return 0;
}
