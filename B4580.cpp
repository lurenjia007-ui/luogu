#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[1000][1000];
signed main() 
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m-1;j++)
        {
            for(int k=j+1;k<m;k++)
            {
                if(a[i][j]>a[i][k])
                {
                    swap(a[i][j],a[i][k]);
                }
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(a[j][i]>a[k][i])
                {
                    swap(a[j][i],a[k][i]);
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
