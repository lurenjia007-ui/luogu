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
    int t;
    cin>>t;
    int a;
    for(int i=1;i<=t;i++){
        cin>>a;
        string s=zhuan(a);
        int flag=1,maxx=0,ans=0;
        for(int j=0;j<s.size();j++){
            if(s[j]=='1'){
                flag=1;
            } else {
                flag=0;
            }
            if(flag){
                ans=ans+1;
            }else{
                if(ans>maxx){
                    maxx=ans;
                }
                ans=0;
            }
            
        }
        if(ans>maxx){
            maxx=ans;
        }
        cout<<maxx<<endl;
    }
    return 0;
}
