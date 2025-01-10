#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '.')
            {
                int cnt = 0;
                while (i < n and str[i] == '.')
                {
                    cnt++;
                    i++;
                }
                if (cnt > 2)
                {
                    ans = 2;
                    break;
                }
                ans += cnt;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
