#include <iostream>
using namespace std;
const int MAX=2000005;
int b[MAX];
int main()
{
    int n;
    cin>>n;
    double a;
    int t;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>t;
        for(int k=1;k<=t;k++)
        {
            int x = (int)(k*a);
            b[x]^=1;
        }
    }
    for(int i=1;i<MAX;i++)
    {
        if(b[i]==1)
        {
            cout<<i;
            return 0;
        }
    }
    return 0;
}
