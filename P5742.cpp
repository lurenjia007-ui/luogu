#include <bits/stdc++.h>
#define int long long
using namespace std;
struct stu
{
    string hao;
    int stu,su,s,z;
}x[100000];
int ok(stu a)
{
    if(a.z>140&&a.s>=800)
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
        cin>>x[i].hao>>x[i].stu>>x[i].su;
        x[i].s=7*x[i].stu+3*x[i].su;
        x[i].z=x[i].stu+x[i].su;
        if(ok(x[i]))
        {
            cout<<"Excellent"<<endl;
        }else
        {
            cout<<"Not excellent"<<endl;
        }
        
    }
    return 0;
}
