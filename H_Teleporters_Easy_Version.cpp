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
        int n, c;
        cin >> n >> c;
        vector<pair<int, int>> tp(n);

        for (int i = 0; i < n; i++)
        {
            int ai;
            cin >> ai;
            tp[i] = {ai + (i + 1), i + 1};
        }

        sort(tp.begin(), tp.end());

        int cnt = 0, coins = c;
        for (auto &[cost, idx] : tp)
        {
            if (coins >= cost)
            {
                coins -= cost;
                cnt++;
            }
            else
            {
                break;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}