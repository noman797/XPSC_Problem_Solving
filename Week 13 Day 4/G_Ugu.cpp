#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        string s;
        cin >> s;

        long long  ans = -1;
        for (long long  p = 0; p < s.size(); p++)
        {
            if (p == 0 and s[p] == '1')
            {
                ans++;
            }
            else if (p > 0 and s[p] != s[p - 1])
            {
                ans++;
            }
        }

        if (ans > 0)
        {
            cout << ans << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}
