#include <bits/stdc++.h>
#define int long long
using namespace std;
int n;
string s,s1,s2;
signed main(){
    cin>>n;
    while(n--){
        cin>>s;
        int f=0;
        for(int i=0;i<(int)(s.size()-2);i++){
            s1=s.substr(0,i+1);
            s2=s.substr(i+1,s.size()-1-i);
            int ok1=1,ok2=1;
            for(int i=0;i<s1.size()/2;i++){
                if(s1[i]!=s1[s1.size()-1-i]){
                    ok1=0;
                    break;
                }
            }
            for(int i=0;i<s2.size()/2;i++){
                if(s2[i]!=s2[s2.size()-1-i]){
                    ok2=0;
                    break;
                }
            }
            if(ok1&&ok2){
                f=1;
                break;
            }
        }
        if(f){
            cout<<"Yes"<<endl;
        }else {
            cout<<"No"<<endl;
        }
    }
    
    return 0;
}
