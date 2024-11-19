#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    long long s;
    cin >> n >> s;
    vector<int> v(n);
    for (int &x : v)
        cin >> x;
    int l = 0, ans = n + 1;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        if (sum >= s)
        {
            while (sum >= s)
            {
                ans = min(ans, i - l + 1);
                sum -= v[l++];
            }
        }
    }
    if (ans > n)
        cout << -1 << endl;
    else
        cout << ans << endl;

    return 0;
}