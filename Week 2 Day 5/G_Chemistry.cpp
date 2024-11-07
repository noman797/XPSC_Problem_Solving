#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int freq[26] = {0};

        for (char i : s)
        {
            freq[i - 'a']++;
        }

        int ans = 0;

        for (char ch : s)
        {
            if (freq[ch - 'a'] % 2 == 1)
            {
                ans++;
                freq[ch - 'a'] = 0;
            }
        }

        if (ans <= (k + 1))
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
