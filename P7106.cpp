#include <bits/stdc++.h>
using namespace std;

string zhuan(char a, char b) {
    int x, y;
    if (a >= 'A' && a <= 'Z') x = a - 'A' + 10;
    else x = a - '0';
    
    if (b >= 'A' && b <= 'Z') y = b - 'A' + 10;
    else y = b - '0';
    
    int v = x * 16 + y;
    int f = 255 - v;
    
    int h = f / 16;
    int l = f % 16;
    
    char c, d;
    if (h < 10) c = h + '0';
    else c = h - 10 + 'A';
    
    if (l < 10) d = l + '0';
    else d = l - 10 + 'A';
    
    string s = "";
    s += c;
    s += d;
    return s;
}

int main() {
    cout << "#";
    char c;
    cin >> c;
    char a, b;
    for (int i = 1; i <= 3; i++) {
        cin >> a >> b;
        cout << zhuan(a, b);
    }
    cout << endl;
    return 0;
}
