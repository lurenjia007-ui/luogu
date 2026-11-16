#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[100005];  
signed main() {
    int n;
    cin >> n;
   
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    int ans=0;
    for(int i=1;i<n;i++){
        for(int j=i+1;j<=n;j++){
            for(int k=0;k*k<=a[i]+a[j];k++){
                if(k*k==a[i]+a[j]){
                    ans++;
                }
            }
    }
}
cout<<ans<<endl;
   return 0;
}
