#include <bits/stdc++.h>
#define long long
using namespace std;
signed main(){
    int a,b,c;
    int ans=0;
    cin>>a>>b>>c;
    for(int x=0;a*x<=c;x++){
        int y=(c-a*x)/b;
        if(y==1.0*(c-a*x)/b){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
