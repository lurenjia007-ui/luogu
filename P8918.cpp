#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        if(a%2){
            int ans=0;
            while(a){
                ans++;
                a=a/2;
            }
            cout<<ans<<endl;
        }else {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}
