#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        for (int i = 1; i <= n - k; i++)
        {
            cout << i << " ";
        }
        for (int i = n; i > n - k; i--)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
