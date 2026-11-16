#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int a,b;
    cin>>a>>b;
    int s,g,m;
    for(int i=a;i<=b;i++){
        g=i%10;
        s=i/10;
        m=10*g+s;
        int ok1=1,ok2=1;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                ok1=0;
                break;
            }
        }
        for(int j=2;j*j<=m;j++){
            if(m%j==0){
                ok2=0;
                break;
            }
        }
        if(ok1==1 && ok2==1){
            cout<<i<<endl;
        }
    }
    return 0;
}
