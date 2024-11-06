#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    string t = "Timur";
    sort(t.begin(), t.end());

    while (n--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (n == 5)
        {
            string x = s;
            sort(x.begin(), x.end());
            if (x == t)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
