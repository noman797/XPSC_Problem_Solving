#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n, s;
    cin >> n >> s;

    vector<long long> a(n);
    for (long long i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    long long count = 0;
    long long sum = 0;
    long long r = 0;

    for (long long l = 0; l < n; ++l)
    {
        while (r < n && sum < s)
        {
            sum += a[r];
            r++;
        }

        if (sum >= s)
        {
            count += (n - r + 1);
        }

        sum -= a[l];
    }

    cout << count << endl;

    return 0;
}