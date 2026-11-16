#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[100005], s[100005];
string  zhuan(int a){
    string s="";
    while(a){
        if(a%2){
            s="1"+s;
        }else s="0"+s;
        a=a/2;
    }
    return s;
}
signed main() {
    int n;
    cin>>n;
    int ans=0;
   for(int i=1;i<=n;i++){
        string s=zhuan(i);
        int ok=1;
        for(int j=0;j<s.size()/2;j++){
            if(s[j]!=s[s.size()-1-j]){
                ok=0;
                break;
            }
        }
        if(ok) ans++;
   }
       cout<<ans<<endl;

    return 0;
}
