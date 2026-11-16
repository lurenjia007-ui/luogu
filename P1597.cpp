#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    
    int a = 0, b = 0, c = 0;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >='a' && s[i] <= 'c' && s[i+1] == ':') {
            char t = s[i];
            char v = s[i+3];
            int n = 0;
            
            if (v >= '0' && v <= '9') {
                n = v - '0';
            } else {
                if (v == 'a') n = a;
                else if (v == 'b') n = b;
                else if (v == 'c') n = c;
            }
            
            if (t == 'a') a = n;
            else if (t == 'b') b = n;
            else if (t == 'c') c = n;
            
            i += 4; 
        }
    }
    
    cout << a << " " << b << " " << c << endl;
    return 0;
}
