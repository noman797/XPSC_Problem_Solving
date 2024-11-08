#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, q;
    cin >> n >> m;
    int a[100005], d[100005] = {0};
    bool v[100005] = {false};

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = n; i >= 1; i--)
    {
        if (!v[a[i]])
            d[i]++;
        v[a[i]] = true;
    }

    for (int i = n; i >= 1; i--)
        d[i] += d[i + 1];

    for (int i = 0; i < m; i++)
    {
        cin >> q;
        cout << d[q] << endl;
    }

    return 0;
}
