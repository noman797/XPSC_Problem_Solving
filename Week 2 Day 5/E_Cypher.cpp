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
        int n;
        cin >> n;
        int f[n];

        for (int i = 0; i < n; ++i)
        {
            cin >> f[i];
        }

        int ini[n];

        for (int i = 0; i < n; ++i)
        {
            int m;
            string mv;
            cin >> m >> mv;

            int v = f[i];
            for (char c : mv)
            {
                if (c == 'U')
                {
                    v = (v - 1 + 10) % 10;
                }
                else if (c == 'D')
                {
                    v = (v + 1) % 10;
                }
            }
            ini[i] = v;
        }

        for (int i = 0; i < n; ++i)
        {
            cout << ini[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
