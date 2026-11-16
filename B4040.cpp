#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m;
        cin>>n>>m;
        char a[1000][1000];
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<m;k++)
            {
                cin>>a[j][k];
            }
        }

        int found=0;
        for(int x1=0;x1+3<n && !found;x1++)
        {
            for(int y1=0;y1+3<m;y1++)
            {
                int ok=1; 
                for(int j=0;j<4;j++)
                {
                    if(a[x1][y1+j]!='0' || a[x1+3][y1+j]!='0')
                    {
                        ok=0;
                    }
                }
                for(int r=1;r<=2;r++)
                {
                    if(a[x1+r][y1]!='0' || a[x1+r][y1+3]!='0')
                    {
                        ok=0;
                    }
                    if(a[x1+r][y1+1]!='1' || a[x1+r][y1+2]!='1')
                    {
                        ok=0;
                    }
                }
                if(ok)
                {
                    found=1;
                    break;
                }
            }
        }
        if(found)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }

    return 0;
}
