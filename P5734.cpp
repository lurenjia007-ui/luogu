#include <bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    string star;
    cin>>star;
    int a,c,d;
    string b,res;
    for(int i=1;i<=q;i++){
        cin>>a;
        if(a==1){
            cin>>b;
            res=star+b;
            cout<<res<<endl;
            star=res;
        }else if(a==2){
            cin>>c>>d;
            for(int x=c;x<c+d;x++){
                cout<<star[x];
            }cout<<endl;
            res=star.substr(c,d);
            star=res;
        }else if(a==3){
            cin>>c>>b;
            star.insert(c,b);
            cout<<star<<endl;
        }else if(a==4){
            cin>>b;
            int p=star.find(b);
            if(p==string::npos){
                cout<<-1<<endl;
            }else{
                cout<<p<<endl;
            }
        }
    }
    return 0; 
}
