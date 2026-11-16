#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    string s;
    getline(cin, s); 
    
    int a = 0; 
    int b = 1; 
    int z = 0; 
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') { 
            a++; 
            
            if (a == b) {
                cout << s.substr(z, i - z) <<endl; 
                z = i + 1; 
                a = 0;     
                b++;       
            }
        } else {
            a = 0; 
        }
    }
    
    cout << s.substr(z) <<endl;
    
    return 0;
}
