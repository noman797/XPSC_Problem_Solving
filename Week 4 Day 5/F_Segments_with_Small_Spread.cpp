#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    long long k;
    cin >> n >> k;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    deque<long long> mx, mn;
    int l = 0;
    long long res = 0;

    for (int i = 0; i < n; i++)
    {
        while (!mx.empty() && a[mx.back()] <= a[i])
        {
            mx.pop_back();
        }
        while (!mn.empty() && a[mn.back()] >= a[i])
        {
            mn.pop_back();
        }

        mx.push_back(i);
        mn.push_back(i);

        while (a[mx.front()] - a[mn.front()] > k)
        {
            if (mx.front() <= l)
                mx.pop_front();
            if (mn.front() <= l)
                mn.pop_front();
            l++;
        }

        res += (i - l + 1);
    }

    cout << res << endl;

    return 0;
}