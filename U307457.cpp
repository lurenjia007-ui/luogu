#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    string s;
    cin >> s;
    int p1 = s.find(',');
    int p2 = s.find(',', p1 + 1);
    string a = s.substr(0, p1);
    string b = s.substr(p1 + 1, p2 - p1 - 1);
    string c = s.substr(p2 + 1);
    
    int x = (int)a.find(b);
    int y = (int)a.rfind(c);
    
    if(x == -1 || y == -1 || x + (int)b.size() > y)
    {
        cout << -1 << "\n";
    }
    else
    {
        cout << y - x - (int)b.size() << "\n";
    }
    return 0;
}