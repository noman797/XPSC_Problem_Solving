#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int res = 0;
    int len = 0;
    for (int i = 0; i < 2 * n; i++)
    {
        if (a[i % n] == 1)
        {
            len++;
            res = max(res, len);
        }
        else
        {
            len = 0;
        }
    }
    cout << res << endl;

    return 0;
}