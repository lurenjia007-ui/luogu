#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int a[200][200];
    int n;
    cin>>  n;
    a[1][1] = 1;
    cout<<1<<endl;
    for(int i=2;i<=n;i++){
        for(int j=1;j<=i;j++){
            a[i][j] = a[i-1][j-1] + a[i-1][j];
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
