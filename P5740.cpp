#include <bits/stdc++.h>
#define int long long
using namespace std;
struct stu{
    string name;
    int a,b,c,s;
}x,y;
signed main() {
    int n;
    cin>>n;
    cin>>x.name>>x.a>>x.b>>x.c;
    x.s=x.a+x.b+x.c;
    for(int i=1;i<n;i++){
        cin>>y.name>>y.a>>y.b>>y.c;
        y.s=y.a+y.b+y.c;
        if(y.s>x.s){
            x=y;
        }
    }
    cout<<x.name<<" "<<x.a<<" "<<x.b<<" "<<x.c;
    return 0;
}
