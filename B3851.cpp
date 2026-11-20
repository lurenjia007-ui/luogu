#include <bits/stdc++.h>
#define int long long
using namespace std;
struct hui
{
    int z1,z2,ct;
}x[256];
int cmp(hui a,hui b)
{
    if(a.ct!=b.ct)
    {
        return a.ct>b.ct;
    }else 
    {
        return a.z1<b.z1;
    }
}
int f(char c1,char c2)
{
    int d1,d2;
    if(c1>='0'&&c1<='9')
    {
        d1=c1-'0';
    }else 
    {
        d1=c1-'A'+10;
    }
    if(c2>='0'&&c2<='9')
    {
        d2=c2-'0';
    }else 
    {
        d2=c2-'A'+10;
    }
    return d1*16+d2;
}
string g(int d)
{
    string s="";
    int d1=d/16,d2=d%16;
    if(d1>9)
    {
        s=s+char(d1+'A'-10);
    }else 
    {
        s=s+char(d1+'0');
    }
    if(d2>9)
    {
        s=s+char(d2+'A'-10);
    }else 
    {
        s=s+char(d2+'0');
    }
    return s;
}

signed main()
{
    int a[256][256]={},b[256]={},u[256]={};
    int n,m;
    string s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        m=s.size()/2;
        for(int j=0;j<m;j++)
        {
            a[i][j]=f(s[j*2],s[j*2+1]);
            b[a[i][j]]++;
        }
    }
    for(int i=0;i<256;i++)
    {
        x[i].z1=i;
        x[i].ct=b[i];
    }
    sort(x,x+256,cmp);
    for(int i=0;i<16;i++)
    {
        x[i].z2=i;
        cout<<g(x[i].z1);
    }
    cout<<endl;
    for(int i=16;i<256;i++)
    {
        int v=0;
        int cha=abs(x[0].z1-x[i].z1);
        for(int j=1;j<16;j++)
        {
            if(abs(x[j].z1-x[i].z1)<cha)
            {
                cha=abs(x[j].z1-x[i].z1);
                v=j;
            }
        }
        x[i].z2=x[v].z2;
    }
    for(int i=0;i<256;i++)
    {
        u[x[i].z1]=x[i].z2;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(u[a[i][j]]<=9)
            {
                cout<<u[a[i][j]];
            }else 
            {
                cout<<char(u[a[i][j]]+'A'-10);

            }
        }
        cout<<endl;
    }
    return 0;
}



