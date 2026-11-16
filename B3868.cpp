#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    
    for(int i = 1; i <= n; i++) {
        cin >> s;
        
        
        int a[4] = {0}; 
        int b[4] = {0}; 
        
        
        for(int j = 0; j < s.size(); j++) {
            
            int val = 0;
            
            if(s[j] >= '0' && s[j] <= '9') {
                val = s[j] - '0';
            } else if(s[j] >= 'A' && s[j] <= 'Z') {
                val = s[j] - 'A' + 10;
            }
            
            
            if(val >= 2)  b[0] = 1; 
            if(val >= 8)  b[1] = 1; 
            if(val >= 10) b[2] = 1; 
            if(val >= 16) b[3] = 1; 
        }
        
        for(int j = 0; j < 4; j++) {
            if(b[j] == 0) {
                a[j] = 1;
            }
        }
        
        for(int j = 0; j < 4; j++) {
            cout << a[j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
