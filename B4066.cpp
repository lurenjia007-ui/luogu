#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[100005];  
signed main() {
    int n,k;
    cin>>n>>k;
    int maxx=0,minn=999999;
    for(int i=1;i<=n;i++){
            cin>>a[i];
            maxx=max(maxx,a[i]);
            minn=min(minn,a[i]);
    }
    for(int i=1;i<=n;i++){
        if(a[i]>k){
            a[i]=maxx;
        }else if(a[i]<k){
            a[i]=minn;
        }
    }
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
   return 0;
}
