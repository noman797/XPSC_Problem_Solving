#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    map<int, int> count;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        count[a]++;
    }

    int mx = 0;
    for (auto &p : count)
    {
        if (p.second > mx)
        {
            mx = p.second;
        }
    }

    cout << mx << endl;

    return 0;
}