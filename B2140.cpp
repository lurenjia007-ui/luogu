#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cntA = 0, cntB = 0;
    for(int i = 1; i <= n; i++)
    {
        int x = i;
        int c1 = 0, c0 = 0;
        while(x > 0)
        {
            if(x % 2 == 1)
                c1++;
            else
                c0++;
            x /= 2;
        }
        if(c1 > c0)
            cntA++;
        else
            cntB++;
    }
    cout << cntA << " " << cntB;
    return 0;
}
