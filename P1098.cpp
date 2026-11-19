#include <bits/stdc++.h>
#define int long long
using namespace std;
string s;
int p1,p2,p3;

int z(char c)
{
    if(c>='a'&&c<='z')
    {
        return 1;
    }else
    {
        return 0;
    }
}

int n(char c)
{
    if(c>='0'&&c<='9')
    {
        return 1;
    }else
    {
        return 0;
    }
}

void f(char c)
{
    if(p1==2&&z(c))
    {
        c=c-'a'+'A';
    }
    if(p1==3)
    {
        c='*';
    }
    for(int i=0;i<p2;i++)
    {
        cout<<c;
    }
}

signed main()
{
    cin>>p1>>p2>>p3>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='-' || i==0 || i==s.size()-1 || s[i-1]>=s[i+1] || !((n(s[i-1])&&n(s[i+1]))||(z(s[i-1])&&z(s[i+1]))))
        {
            cout<<s[i];
        }
        else if(p3==1)
        {
            for(char j=s[i-1]+1;j<s[i+1];j++)
            {
                f(j);
            }

        }
        else if(p3==2)
        {
            for(char j=s[i+1]-1;j>=s[i-1]+1;j--)
            {
                f(j);
            }
        }
    }

    return 0;
}