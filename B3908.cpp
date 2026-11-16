#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    if(!(cin>>n)){
        return 0;
    }
    int s=0;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        s^=a;
    }
    cout<<s<<" "<<"0";
    return 0;
}
