#include <bits/stdc++.h>
#define int long long
using namespace std;
string yuan[105], hou[105], s, ans;
char c;

signed main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        cin >> yuan[i] >> hou[i];
    }
    
    while(cin >> c)
    {
        if(c >= 'a' && c <= 'z')
        {
            s += c;
        }
        else
        {
            if(s != "")
            {
                bool f = 0;
                for(int i = 1; i <= n; ++i)
                {
                    if(s == yuan[i])
                    {
                        ans += hou[i];
                        f = 1;
                        break;
                    }
                }
                if(!f) ans += "UNK";
                s = "";
            }
            ans += c;
        }
    }
    
    if(s != "")
    {
        bool f = 0;
        for(int i = 1; i <= n; ++i)
        {
            if(s == yuan[i])
            {
                ans += hou[i];
                f = 1;
                break;
            }
        }
        if(!f) ans += "UNK";
    }
    
    cout << ans;
    return 0;
}