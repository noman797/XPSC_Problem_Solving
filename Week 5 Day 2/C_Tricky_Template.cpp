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
        string a, b, c;
        cin >> a >> b >> c;
        bool valid = false;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != c[i] and b[i] != c[i])
            {
                valid = true;
                break;
            }
        }
        if (valid)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
