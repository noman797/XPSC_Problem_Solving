#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), o, e;
    int s = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        s += a[i];
        if (a[i] % 2) o.push_back(a[i]);
        else e.push_back(a[i]);
    }

    sort(o.rbegin(), o.rend());
    sort(e.rbegin(), e.rend());

    int k = min(o.size(), e.size()), r = s;
    for (int i = 0; i < k; ++i) r -= o[i] + e[i];
    if (o.size() > k) r -= o[k];
    if (e.size() > k) r -= e[k];

    cout << r << endl;
    return 0;
}
