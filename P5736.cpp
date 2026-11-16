#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
        int ok=1;
         if(a[i] <= 1) {
            continue;
        }
        for(int j=2;j<a[i];j++){
            if(a[i]%j==0){
                ok=0;
                break;
            }
        }
        if(ok){
            cout<<a[i]<<" ";
        }
    }
    return 0;
}
