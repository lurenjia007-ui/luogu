#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;

    int d = b[0] - a[0];
    
    for (int i = 0; i < c.size(); i++) {
        char e = c[i] - d;
        if (e < 'A') {
            e += 26;
        }
        if (e > 'Z') {
            e -= 26;
        }
        cout << e;
    }
    cout << "\n";

    return 0;
}
