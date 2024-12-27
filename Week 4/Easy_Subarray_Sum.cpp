#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int l = 0;
        while (l < n and a[l] <= 0)
        {
            l++;
        }
        int r = n - 1;
        while (r >= 0 and a[r] <= 0)
        {
            r--;
        }
        if (r <= l)
        {
            cout << 0 << endl;
        }
        else
        {
            int cnt = 0;
            for (int i = l; i <= r; i++)
            {
                if (a[i] < 0)
                {
                    cnt ++;
                }
            }
            cout << cnt  << endl;
        }
    }
}