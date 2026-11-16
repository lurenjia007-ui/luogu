#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
   int n,m;
   cin>>n>>m;
   int s;
   int z[100000]={0};
   for(int i=1;i<=m;i++){
    cin>>s;
    z[s]++;
   }
   int ans=0;
   for(int i=0;i<n;i++){
    if(z[i]==0){
        cout<<i<<" ";
    }
   }
   int ok=0;
   for(int i=0;i<n;i++){
    if(z[i]>=1){
        ok=1;
    }else {
        ok=0;
        break;
    }
   }
   if(ok){
    cout<<n;
   }
	return 0;
}
