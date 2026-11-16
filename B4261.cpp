#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int x,y,flag=0;
    cin>>x;
    for(y=1;y<2025;y++){
        if((x&y)+(x|y)==2025){
            flag=1;
            break;
        }
    }
    if(flag){
        cout<<y<<endl;
    }else {
        cout<<"-1"<<endl;
    }
    return 0;
}
