#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string word;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == ' ')
        {
            cout << word << endl;
            word = "";
        }
        else
        {
            word = s[i] + word;
        }
    }
    cout << word << endl;
    return 0;
}
