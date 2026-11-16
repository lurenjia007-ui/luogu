#include <bits/stdc++.h>
#define int long long 
using namespace std;
int a[100000]={6,2,5,5,4,5,6,3,7,6};
signed main(){
    int n,ans=0;
    cin>>n;
    for(int i=10;i<2000;i++){
        int t=i;
        while(t){
            a[i]+=a[t%10];
                t=t/10;
        }
    }
    for(int i=0;i<1000;i++){
        for(int j=0;j<1000;j++){
            if(a[i]+a[j]+a[i+j]+4==n){
                ans=ans+1;
            }
        }
    }
    cout<<ans;
    return 0;
}
