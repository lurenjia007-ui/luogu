#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[1000],sm=0;
signed main()
{
    int k1,k2,k3,s1,s2,s3;
    cin>>k1>>k2>>k3;
    for(int i=1;i<=1000/k3;i++)
    {   
        int  p=1;
        s1=i*k1;
        s2=i*k2;
        s3=i*k3;
        int ans1,ans2,ans3;
        ans1=s1;
        ans2=s2;
        ans3=s3;
        if(s2>999||s3>999)
        {
            break;
        }
        for(int j=1;j<=3;j++)
        {
            a[s1%10]++;
            s1/=10;
        }
        for(int j=1;j<=3;j++)
        {
            a[s2%10]++;
            s2/=10;
        }
        for(int j=1;j<=3;j++)
        {
            a[s3%10]++;
            s3/=10;
        }
        for(int j=1;j<=9;j++)
        {
            if(a[j]!=1)
            {
                p=0;
                break;
            }
        }
        for(int j=1;j<=9;j++)
        {
            a[j]=0;
        }
        if(p)
        {
            cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
            sm++;
        }else {
            p=1;
        }
    }
    if(!sm)
    {
        cout<<"No!!!"<<endl;
    }
    return 0;
}
