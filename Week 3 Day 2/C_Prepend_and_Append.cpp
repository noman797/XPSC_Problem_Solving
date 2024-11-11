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
        long n;
        cin >> n;
        string s;
        cin >> s;
        long long  l = 0, r = s.size() - 1;
        while ((l < r) and (s[l] != s[r]))
        {
            l++;
            r--;
        }
        cout << (r - l + 1) << endl;
    }

    return 0;
}
