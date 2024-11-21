#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    map<int, int> f;
    int l = 0, uc = 0;
    long long res = 0;

    for (int r = 0; r < n; ++r)
    {
        if (f[a[r]] == 0)
        {
            uc++;
        }
        f[a[r]]++;

        while (uc > k)
        {
            f[a[l]]--;
            if (f[a[l]] == 0)
            {
                uc--;
            }
            l++;
        }

        res += (r - l + 1);
    }

    cout << res << endl;

    return 0;
}
