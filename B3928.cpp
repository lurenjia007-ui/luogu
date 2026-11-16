#include <bits/stdc++.h>
#define int long long
using namespace std;

int a[100000];
int b[100000];

signed main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    
    sort(a, a + n);
    sort(b, b + n);
    
    int ans = 0, m = 0;
    
    for(int i = 0; i < n; i++){
        if(a[i] > b[m]){
            ans++;
            m++;
        }
    }
    
    cout << ans << endl;
    return 0;
}
