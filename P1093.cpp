#include <bits/stdc++.h>
#define int long long
using namespace std;
struct stu
{
    int hao,c,m,e,s,a=0;
}x[100000];
signed main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x[i].c>>x[i].m>>x[i].e;
        x[i].s=x[i].c+x[i].m+x[i].e;
        x[i].hao=i;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
        if(x[i].s>x[j].s)
        {
            x[i].a++;
            continue;
        }
            if(x[i].s<x[j].s)
            {
                x[j].a++;
                continue;
            }
            if(x[i].s==x[j].s)
            {
                if(x[i].c>x[j].c)
                {
                    x[i].a++;
                    continue;
                }
                if(x[i].c<x[j].c)
                {
                    x[j].a++;
                    continue;
                }
                if(x[i].c==x[j].c)
                {
                    if(x[i].hao<x[j].hao)
                    {
                    x[i].a++;
                    }else 
                    {
                        x[j].a++;
                    }
                }
            }
        }
    }
    for(int i=n-1;i>=n-5;i--){
        for(int j=1;j<=n;j++){
            if(x[j].a==i){
                cout<<x[j].hao<<" "<<x[j].s<<endl;
            }
        }
    }
}
