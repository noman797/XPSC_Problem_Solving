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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        map<int, int> cnt;
        string s = "";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 26; j++)
            {
                if (cnt[j] == a[i])
                {
                    cnt[j]++;
                    s += (char)(97 + j);
                    break;
                }
            }
        }
        cout << s << endl;
    }

    return 0;
}
