#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    string a,b="",c="";
    cin>>a;
    int m=-1;
    for(int i=a.size()-1;i>=0;--i)
    {
        if(a[i]<'0'||a[i]>'9')
        {
            m=i;
            break;
        }
    }
    if(m==-1) m=a.size();  
    for(int i=m-1;i>=0;--i)
    {
        b=b+a[i];          // 反转前半段
    }
    while(b.size()>1 && b[0]=='0')
        b.erase(0,1);      // 去前导零
    for(int i=a.size()-1;i>m;--i)
    {
        c=c+a[i];          // 反转后半段
    }
    if(m<(int)a.size() && a[m]=='.')
    {
        while(c.size()>1 && c[c.size()-1]=='0')
            c.erase(c.size()-1,1);   // 小数部分去后导零
    }
    if(m<(int)a.size())
        b=b+a[m];          // 拼分隔符
    b=b+c;
    cout<<b;
    return 0;
}
