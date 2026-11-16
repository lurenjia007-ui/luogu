#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[100000];
double maxx[100000];
signed main() {
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int ma=0,mi=1e9,s=0;
        for(int j=0;j<m;j++){
            cin>>a[j];
            ma=max(ma,a[j]);
            mi=min(mi,a[j]);
            s+=a[j];
        }
        maxx[i]=1.0*(s-ma-mi)/(m-2);
    }
    double ans=0;
    for(int i=0;i<n;i++){
        ans=max(ans,maxx[i]);
    }
    printf("%.2lf\n",ans);
    return 0;
}
