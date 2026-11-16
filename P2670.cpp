#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int n,m;
    cin >> n >> m;
    char a[2000][2000];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
            if(a[i][j]=='?'){
                a[i][j]='0';
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]=='*'){
                if(a[i-1][j]!='*') a[i-1][j]++;
                if(a[i+1][j]!='*') a[i+1][j]++;
                if(a[i][j-1]!='*') a[i][j-1]++;
                if(a[i][j+1]!='*') a[i][j+1]++;
                if(a[i-1][j-1]!='*') a[i-1][j-1]++;
                if(a[i-1][j+1]!='*') a[i-1][j+1]++;
                if(a[i+1][j-1]!='*') a[i+1][j-1]++;
                if(a[i+1][j+1]!='*') a[i+1][j+1]++;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}
