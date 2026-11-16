#include <bits/stdc++.h>
#define int long long
using namespace std;

string f(string s) {
    if (s == "0" || s == "-0") return "0";
    if (s == "1") return "+";
    if (s == "-1") return "-";
    if (s[0] == '-') return s;
    else return "+" + s;
}
signed main() {
    int n;
    cin >> n;
    string s;
    int a = 1;
    
    for (int i = n; i >= 1; i--) {
        cin >> s;
        if (s == "0" || s == "-0") continue;
        
        if (a) {
            if (s[0] == '-') cout << "-";
            a = 0;
        } else {
            s = f(s);
            if (s == "+" || s == "-") cout << s;
            else cout << s[0];
        }
        
        string t = s;
        if (s[0] == '+' || s[0] == '-') t = s.substr(1);
        
        if (t != "1" && t != "") cout << t;
        
        cout << "x";
        if (i > 1) cout << "^" << i; 
    }
    
    cin >> s;
    if (s != "0" && s != "-0") {
        if (a) {
            cout << s;
            a = 0;
        } else {
            if (s[0] != '-') cout << "+";
            cout << s;
        }
    }
    
    if (a) cout << "0";
    
    return 0;
}
