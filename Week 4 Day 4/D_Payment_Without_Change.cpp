#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int q;
    cin >> q;

    while (q--)
    {
        int a, b, n, S;
        cin >> a >> b >> n >> S;

        int x = min(a, S / n);
        int r = S - x * n;

        if (r <= b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}