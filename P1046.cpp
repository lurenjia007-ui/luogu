#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
  int a[11];
  for(int i = 0; i < 10; i++){
    cin >> a[i];
  }
  int h;
  cin >> h;
  h=h+30;
  int ans = 0;
  for(int i = 0; i < 10; i++){
        if(a[i] <= h){
            ans++;
        }
        
        }
  
            cout << ans << endl;
    return 0;
}
