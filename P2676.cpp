#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int n,b,a[100000];
    cin>>n>>b;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int s=0,ans=0;
    for(int i=n-1;i>=0;i--){
        s=s+a[i];
        ans++;
        if(s>=b){
            cout<<ans<<endl;
            return 0;

        }
        
    }
    
    return 0;
}
