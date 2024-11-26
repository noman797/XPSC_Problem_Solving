#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, x = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            x ^= a[i];
        }
        int m = x;
        for (int i = 0; i < n; i++)
        {
            m = min(m, x ^ a[i]);
        }
        cout << m << endl;
    }

    return 0;
}
