#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n, a, b, price;
        cin >> n >> a >> b;

        price = a * n;

        if (b < 2 * a)
        {
            int pro = (n / 2) * b;
            int reg = (n % 2) * a;
            price = pro + reg;
        }

        cout << price << endl;
    }

    return 0;
}
