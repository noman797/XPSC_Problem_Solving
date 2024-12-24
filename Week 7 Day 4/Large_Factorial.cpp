#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e9 + 7;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll m = 1;
        for (ll i = n; i >= 1; i--)
        {
            m = (m * i) % N;
        }
        cout << m << endl;
    }
    return 0;
}
