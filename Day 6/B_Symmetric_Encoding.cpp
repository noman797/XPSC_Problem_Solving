#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    set<char> li;
    for (int i = 0; i < n; i++)
        li.insert(s[i]);

    vector<char> notun(256);

    auto bam = li.begin();
    auto dan = li.rbegin();

    while (bam != li.end() && dan != li.rend())
    {
        notun[*bam++] = *dan++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << notun[s[i]];
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc;
    cin >> tc;
    while (tc--)
        solve();

    return 0;
}
