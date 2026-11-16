#include <bits/stdc++.h>
#define int long long
using namespace std;

int zhuan(int a, string x) {
    int p = 1, z10 = 0;
    for (int i = x.size() - 1; i >= 0; i--) {
        int val = 0; 
        if (x[i] >= 'A' && x[i] <= 'Z') {
            val = x[i] - 'A' + 10;
        } else if (x[i] >= '0' && x[i] <= '9') {
            val = x[i] - '0';
        }
        z10 = z10 + val * p;
        p = p * a;
    }
    return z10;
}

string ans(int z, int a) { 
    if (a == 0) return "0"; 
    string res = "";
    while (a > 0) {
        int b = a % z;
        if (b <= 9) {
            res = char('0' + b) + res; 
        } else {
            res = char('A' + b - 10) + res; 
        }
        a = a / z;
    }
    return res;
}

signed main() {
    int a, b, n;
    string s;
    cin >> a >> s >> b;
    
    n = zhuan(a, s); 
    
    cout << ans(b, n) << endl; 
    
    return 0;
}
