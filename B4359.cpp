#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[100005];  
signed main() {
    int n;
    cin>>n;
    int minn=0,sum=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]>minn) {
            sum+=a[i];
            minn=a[i];
        }else if(a[i]<=minn) {
            sum+=minn+1;
            minn+=1;
        }
    }
    cout<<sum<<endl;
   return 0;
}
