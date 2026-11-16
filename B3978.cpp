#include <bits/stdc++.h>
using namespace std;
string zhuan(int x){
    string s="";
    while(x){
        if(x%2){
        s='1'+s;
    }else s='0'+s;
x=x/2;
    }
    return s;
}
int main(){
    int a,b,ans=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
            string s=zhuan(i);
        int l=s.size(),p=1;
        if(s[1]!=s[0]||s[l-1]!=s[l-2])continue;
        for(int j=1;j<l-1;j++){
            if(s[j]!=s[j-1]&&s[j]!=s[j+1]){
                p=0;
                break;
            }
        }if(p)ans++;
        
    }
    cout<<ans;
    return 0;
}
