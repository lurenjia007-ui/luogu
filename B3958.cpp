#include <bits/stdc++.h>
#define int long long
using namespace std;
bool ok(string a, string b)
{
    if(a.size() < b.size()) swap(a, b);
    if(a.size() - b.size() > 1) return 0;
    int i = 0, j = 0, c = 0;
    while(i < a.size() && j < b.size())
    {
        if(a[i] == b[j])
        {
            i++; j++;
        }
        else
        {
            c++;
            if(c > 1) return 0;
            if(a.size() == b.size())
            {
                i++; j++;
            }
            else
            {
                i++;
            }
        }
    }
    return 1;
}

signed main()
{
    int t; cin >> t;
    while(t--)
    {
        string a, b; cin >> a >> b;
        cout << (ok(a, b) ? "similar\n" : "not similar\n");
    }
    return 0;
}