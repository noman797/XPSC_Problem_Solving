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
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
            mp[a[i]]++;

        ll res = 0;
        for (auto it : mp)
            res += it.second / 3;

        cout << res << endl;
    }
    return 0;
}
