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
        long long int n;
        cin >> n;
        long long int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);

        if (n == 1)
        {
            cout << "YES" << endl;
        }
        else if (n == 2)
        {
            if (a[0] == a[1] || a[0] == 0 || a[1] == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            int c = 0;
            for (int i = 0; i < n - 1; i++)
            {
                if (a[i] != 0 && a[i] != a[i + 1])
                {
                    c = 1;
                    break;
                }
            }
            if (c == 1)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}
