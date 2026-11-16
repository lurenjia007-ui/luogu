#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int n,m;
    cin >> n >> m;
    int a[2000][2000]={0};
    int x1,y1,x2,y2;
    for(int i=1;i<=m;i++){
        cin>>x1>>y1>>x2>>y2;
        for(int j=x1;j<=x2;j++){
            for(int k=y1;k<=y2;k++){
                a[j][k]++;
            }
        }
       
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
