#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, l;
        cin >> n >> k >> l;

        vector<ll> v;

        for (ll i = 0; i < n; i++)
        {
            ll a, b;
            cin >> a >> b;
            if (b == l)
            {
                v.push_back(a);
            }
        }

        if (v.size() < k)
        {
            cout << -1 << endl;
        }
        else
        {
            sort(v.rbegin(), v.rend());
            cout << accumulate(v.begin(), v.begin() + k, 0LL) << endl;
        }
    }
    return 0;
}
