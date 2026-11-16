#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int n;
    cin >> n;
    int a[1000007];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    int ans = 0;
    int k=0;
    for(int i=1;i<=n;i++){
        for(int j=k;j<n;j++){
            if(a[j]>=i){
                ans++;
                k=j+1;
                break;
            }else {
                continue;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
