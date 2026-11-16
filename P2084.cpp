#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;
    string n;
    cin >> m >> n;
    
    int p = -1; 
    
    for (int i = 0; i < n.size(); i++) {
        if (n[i] != '0') {
            p = i;
            break;
        }
    }
    
    if (p == -1) return 0; 
    
    cout << n[p] << "*" << m << "^" << n.size() - 1 - p;
    
    for (int i = p + 1; i < n.size(); i++) {
        if (n[i] != '0') {
            cout << "+" << n[i] << "*" << m << "^" << n.size() - 1 - i;
        }
    }

    return 0;
}
