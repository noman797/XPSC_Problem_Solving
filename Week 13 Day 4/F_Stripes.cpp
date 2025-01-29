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
        char g[8][8];
        vector<int> r;

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> g[i][j];
                if (g[i][j] == 'R')
                {
                    r.push_back(i);
                }
            }
        }

        bool found = false;
        for (int i : r)
        {
            bool flag = true;
            for (int j = 0; j < 8; j++)
            {
                if (g[i][j] != 'R')
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                cout << "R" <<endl;
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << "B" <<endl;
        }
    }

    return 0;
}
