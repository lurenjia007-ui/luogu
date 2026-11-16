#include <bits/stdc++.h>
using namespace std;
string zhuan(long long a){
    string s="";
    while(a){
        if(a%2){
            s="1"+s;
        }else {
            s="0"+s;
        }
        a=a/2;
        
    }
    return s;
}
int main(){
    long long k,n;
    cin>>k>>n;
    string s=zhuan(n);
    long long ans=0,t=1;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='1'){
            ans=ans+t;
        }
        t=t*k;
    }
    cout<<ans;
    return 0;
}
