#include <bits/stdc++.h>
#define int long long
using namespace std;
struct stu
{
    string name;
    int a,b,c,s;
}
x[10000];
int ok(stu a,stu b)
{
if(abs(a.a-b.a)<=5&&abs(a.b-b.b)<=5&&abs(a.c-b.c)<=5&&abs(a.s-b.s)<=10)
{
    return 1;
}else 
{
    return 0;
}
}

signed main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x[i].name>>x[i].a>>x[i].b>>x[i].c;
        x[i].s=x[i].a+x[i].b+x[i].c;   
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int p=ok(x[i],x[j]);
                if(p)
                {
                    cout<<x[i].name<<" "<<x[j].name<<endl;
                }else
                {
                continue;    
                }
        }
    }
    return 0;
}
