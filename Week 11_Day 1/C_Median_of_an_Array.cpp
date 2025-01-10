#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        if (n == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            sort(v.begin(), v.end());

            int m;
            if (n % 2 == 0)
            {
                m = n / 2;
            }
            else
            {
                m = n / 2 + 1;
            }

            int ml = v[m - 1];
            int cnt = 0;

            for (int i = m - 1; i < n; i++)
            {
                if (v[i] == ml)
                {
                    cnt++;
                }
            }

            cout << cnt << endl;
        }
    }

    return 0;
}
