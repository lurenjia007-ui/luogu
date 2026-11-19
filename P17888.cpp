#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int n;
    int a,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a%b==0)
        {
            cout<<"1"<<endl;
        }else 
        {
            cout<<"0"<<endl;
        }
    }
    return 0;
}
