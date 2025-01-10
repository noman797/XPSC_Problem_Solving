#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, xr;
    cin >> t;
    while (t--) 
    {
        cin >> n;
        xr = 0;
        for (int i = 0, x; i < n; i++) 
        {
            cin >> x;
            xr ^= x;
        }
        if (xr == 0) 
        {
            cout << 0 << endl;
        } else 
        {
            if (n % 2 == 1) 
            {
                cout << xr << endl;
            } 
            else 
            {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}
