#include <bits/stdc++.h>
using namespace std;
long long zhuan(string s,long long b){
    long long ans=0,t=1;
    int a;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]>='0'&&s[i]<='9'){
            a=s[i]-'0';
        }else if(s[i]>='A'&&s[i]<='Z'){
            a=s[i]-'A'+10;
        }if(a>=b){
            return 0;
        }
        ans=ans+a*t;
        t=t*b;
    }
    return ans;
}
int main(){
    string p,q,r;
    cin>>p>>q>>r;
    for(int i=2;i<=16;i++){
        long long x=zhuan(p,i)*zhuan(q,i);
        if(x==zhuan(r,i)&&x!=0){
            cout<<i<<endl;
            return 0;
        }
    }cout<<"0"<<endl;
    return 0;
}
