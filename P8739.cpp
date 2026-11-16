#include <bits/stdc++.h>
#define int long long
using namespace std;

string a[100005];

signed main()
{
    int k;
    cin >> k;
    string s;
    cin >> s;

    int n = s.size();
    if(n % k != 0) { cout << -1 << endl; return 0; }

    int len = n / k;

    for(int i = 0; i < k; i++)
    {
        a[i].clear();
        for(int j = i * len; j < (i + 1) * len; j++)
            a[i] += s[j];
    }

    int ans = 0;
    for(int p = 0; p < len; p++)
    {
        int cnt[26] = {0};
        for(int i = 0; i < k; i++)
            cnt[a[i][p] - 'a']++;
        int mx = 0;
        for(int c = 0; c < 26; c++)
            if(cnt[c] > mx) mx = cnt[c];
        ans += k - mx;
    }

    cout << ans << endl;
    return 0;
}