#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    const string alph = "abc";
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int cnt = 0;

        if (s[0] != alph[0])
            cnt++;
        if (s[1] != alph[1])
            cnt++;
        if (s[2] != alph[2])
            cnt++;

        if (cnt <= 2)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
