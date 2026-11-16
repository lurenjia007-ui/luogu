#include <bits/stdc++.h>
#define int long long
using namespace std;
char a[1000][1000];
signed main() 
{
   int h,w;
   cin>>h>>w;
   int x1,y1,x2,y2;
   cin>>x1>>x2>>y1>>y2;
   for(int i=1;i<=h;i++)
   {
    for(int  j=1;j<=w;j++)
    {
        cin>>a[i][j];
    }
   }
   for(int i=x1;i<=x2;i++)
   {
    for(int  j=y1;j<=y2;j++)
    {
        cout<<a[i][j];
    }
    cout<<endl;
   }
    return 0;
}
