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
        vector<int> a(n);
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s += a[i];
        }
        if (s == 0)
        {
            cout << "NO" << endl;
            continue;
        }
        if (s > 0)
            sort(a.rbegin(), a.rend());
        else
            sort(a.begin(), a.end());
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}