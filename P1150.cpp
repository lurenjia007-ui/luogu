#include <iostream>
using namespace std;

int main()
{
    long long n,k;
    cin >> n >> k;
    long long t = n;
    long long b = n;

    while(b >= k)
    {
        long long x = b / k;
        b = b % k;
        t = t + x;
        b = b + x;
    }
    cout << t << endl;
    return 0;
}
