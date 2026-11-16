#include <bits/stdc++.h>
#define int long long
using namespace std;

int a[10000000];

signed main() {
    int n;
    cin >> n;
    
    a[0] = 1;
    
    for(int i = 1; i < n; i++){
        int t = a[i-1] - i - 1;
        int ok = 0;
        
        for(int j = 0; j < i; j++){
            if(a[j] == t && t > 0){
                ok = 1;
                break;
            }
        }
        
        if(ok == 0 && t > 0){
            a[i] = t;
        } else {
            a[i] = a[i-1] + i + 1;
        }
    }
    
    sort(a, a + n);
    
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    
    return 0;
}
