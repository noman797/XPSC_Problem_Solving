#include <bits/stdc++.h>
using namespace std;

int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        long n, k;
        cin >> n >> k;
        long total = 0, mx = 0;
        for (long p = 0; p < k; p++)
        {
            long x;
            cin >> x;
            mx = max(mx, x);
            total += (2 * x - 1);
        }
        total -= (2 * mx - 1);
        cout << total << endl;
    }
}
