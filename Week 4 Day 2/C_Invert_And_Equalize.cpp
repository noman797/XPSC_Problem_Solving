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
        string s;
        cin >> s;
        int cnt = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != s[i + 1])
                cnt++;
        }

        cout << cnt / 2 << endl;
    }

    return 0;
}