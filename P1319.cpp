#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int n;
    cin>>n;
    int a[2000][2000];
    int q=1,w=0;
    int m;
    int k=0;
    while(cin>>m){
        for(int i=0;i<m;i++,k++){
            a[k/n][k%n]=w;
        }
        swap(q,w);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}
