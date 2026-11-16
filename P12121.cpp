#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a = 8100178706957568;
    
    for (int i = 11; i <= 36; i++) {
        long long b = a; 
        int c = 1;
        
        while (b > 0) {
            if (b % i >= 10) { 
                c = 0; 
                break;
            }
            b /= i; 
        }
        
        if (c == 1) {
            cout << i << endl;
            break;
        }
    }
    
    return 0;
}
