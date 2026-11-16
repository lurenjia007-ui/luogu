#include <bits/stdc++.h>
#define int long long
using namespace std;
string zhuan(int n){
    string s="";
    while(n>0){
        if(n%2){
            s="1"+s;
        }else {
            s="0"+s;
        }n=n/2;
    }
    return s;
}
signed main(){
    int n,ans=0,a;
    cin>>n;
    string s;
    for(int i=1;i<=n;i++){
        cin>>a;
        s=zhuan(a);
        for(int j=s.size()-1;j>=0;j--){
            if(s[j]=='1'){
                ans++;
            }
        }
    }
    cout<<ans<<" ";
    if(ans%2){
        cout<<"1";
    }else {
        cout<<"0";
    }
    return 0;
}
