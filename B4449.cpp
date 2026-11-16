#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        string s;
        cin >> s;
        int l=0, u=0, d=0; 
        if(s.size()>=8) l=1;

        for(int i=0; i<s.size(); i++)
        {
            char c = s[i];
            if(c>='A' && c<='Z')
            {
                u=1;
            }
            if(c>='0' && c<='9')
            {
                d=1;
            }
        }
        if(l==1 && u==1 && d==1)
        {
            cout << "Y\n";
        }
        else
        {
            cout << "N\n";
        }
    }
    return 0;
}
