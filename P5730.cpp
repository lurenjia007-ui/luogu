#include <bits/stdc++.h>
#define int long long
using namespace std;

string a[10][5] = {
    {"XXX", "X.X", "X.X", "X.X", "XXX"},
    {"..X", "..X", "..X", "..X", "..X"},
    {"XXX", "..X", "XXX", "X..", "XXX"},
    {"XXX", "..X", "XXX", "..X", "XXX"},
    {"X.X", "X.X", "XXX", "..X", "..X"},
    {"XXX", "X..", "XXX", "..X", "XXX"},
    {"XXX", "X..", "XXX", "X.X", "XXX"},
    {"XXX", "..X", "..X", "..X", "..X"},
    {"XXX", "X.X", "XXX", "X.X", "XXX"},
    {"XXX", "X.X", "XXX", "..X", "XXX"}
};

signed main() {
    int n;
    string s;
    cin >> n >> s;
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < n; j++) {
            int x = s[j] - '0';
            cout << a[x][i];
            if (j != n - 1) cout << ".";
        }
        cout <<endl;
    }
    
    return 0;
}
