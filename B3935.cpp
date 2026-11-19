#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    int n, m, t;
    string s;
    cin >> t;
    while(t--)
    {
        cin >> n >> m >> s;
        
        int f = 1;
        int L = -1;
        int r = -1;
        int cnt = 0;
        
        for(int i = 0; i < m; i++)
        {
            if(s[i] == '1')
            {
                cnt++;
                if(r == -1) 
                {
                    r = i;
                }
                
                int l = 0;
                int j = i + 1;
                while(j < m && s[j] == '0')
                {
                    l++;
                    j++;
                }
                
                if(l > n) 
                {
                    f = 0;
                }
                
                if(j < m) 
                {
                    if(L == -1) 
                    {
                        L = l;
                    }
                    else if(L != l) 
                    {
                        f = 0;
                    }
                }
                else 
                {
                    if(L != -1 && l > L) 
                    {
                        f = 0;
                    }
                }
                
                i = j - 1;
            }
        }
        
        if(cnt == 0) 
        {
            if(m > n) f = 0;
        }
        else if(cnt == 1) 
        {
            if(r > n) f = 0;
        }
        else 
        {
            if(r > L) f = 0;
        }
        
        if(f == 1) 
        {
            cout << "Yes\n";
        }
        else 
        {
            cout << "No\n";
        }
    }
    return 0;
}