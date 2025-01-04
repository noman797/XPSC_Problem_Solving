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
        string t, s = "";
        cin >> t;

        int i = n - 1;
        while (i >= 0)
        {
            if (t[i] == '0')
            {
                s += 'a' + (t[i - 2] - '0') * 10 + (t[i - 1] - '0') - 1;
                i -= 3;
            }
            else
            {
                s += 'a' + (t[i] - '0') - 1;
                i--;
            }
        }

        reverse(s.begin(), s.end());
        cout << s << endl;
    }

    return 0;
}
