#include <bits/stdc++.h>
using namespace std;

string s, a[105];
int n, c, b[105];

int main() {
    cin >> n;
    while (n--) {
        cin >> s;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
        }
        int f = 0;
        for (int i = 0; i <= c; i++) {
            if (a[i] == s) { 
                b[i]++; 
                f = 1; 
                break; 
            }
        }
        if (!f) { 
            a[c] = s; 
            b[c]++; 
            c++; 
        }
    }
    int m = -1; 
    string r = "";
    for (int i = 0; i <= c; i++) {
        if (b[i] >= m) { 
            m = b[i]; 
            r = a[i]; 
        }
    }
    cout << r;
    return 0;
}
