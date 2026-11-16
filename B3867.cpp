#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
   int n,d;
   cin>>n>>d;
   int a[100000],s[100000]={0};
   for(int i=0;i<d;i++){
       cin>>a[i];
       s[a[i]]+=i+1;
   }
for(int i=0;i<n;i++){
    cout<<s[i]<<" ";
}
}
