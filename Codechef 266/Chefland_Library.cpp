#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (auto &x : a)
            cin >> x;

        ll m = *max_element(a.begin(), a.end());
        vector<ll> p(m + 1, 0);

        for (ll i = 0; i < n; i++) {
            p[a[i]] = max(p[a[i]], i + 1);
        }

        ll s = accumulate(p.begin(), p.end(), 0LL);
        cout << s << endl;
    }

    return 0;
}
