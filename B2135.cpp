#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,t,a,res="";
    getline(cin,s);
    cin>>t>>a;
    string b;
    for(int i=0;i<s.size();i++){
        if(s[i]=='\r')break;
        if(s[i]!=' '){
            b=b+s[i];
        }else {
            if(b==t){
                res+=a;
            }else {
                res=res+b;
            }b="";
            res=res+" ";
            
        }
    }
    if(b.size()>0){
        if(b==t){
            res=res+a;
        }else res=res+b
;    }
    cout<<res;
    return 0;
}
