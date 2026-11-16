#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n >> s;
    for(int i = 0; i < n; i++)
    {
        char c = s[i];
        if(c >= 'A' && c <= 'Z')
        {
            cout << (char)(c + 32);
        }
        else if(c >= 'a' && c <= 'z')
        {
            cout << (char)(c - 32);
        }
        else
        {
            cout << '*';
        }
    }
    return 0;
}
