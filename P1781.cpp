#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 1;
    string best;
    cin >> best;
    for (int i = 2; i <= n; i++)
    {
        string s;
        cin >> s;

        if (s.size() > best.size() ||
            (s.size() == best.size() && s > best))
        {
            best = s;
            ans = i;
        }
    }
    cout << ans << endl;
    cout << best << endl;
    return 0;
}
