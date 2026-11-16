#include <bits/stdc++.h>
#define int long long
using namespace std;
bool cmp(string a,string b)
{
    return a+b>b+a;
}
signed main()
{
    int n;
    cin >> n;
    string a[10000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
    cout<<endl;
    return 0;
}
