#include <bits/stdc++.h>
using namespace std;

int t;
int n;
string s;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> s;
        int sm = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '+')
            {
                sm++;
            }
            else
            {
                sm--;
            }
        }
        cout << abs(sm) << endl;
    }
}
