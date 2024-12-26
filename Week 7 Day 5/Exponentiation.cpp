#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    const int M = 1000000007;
    int n;
    cin >> n;
    while (n--)
    {
        ll a, b, r = 1;
        cin >> a >> b;
        a %= M;
        while (b > 0)
        {
            if (b % 2)
                r = (r * a) % M;
            a = (a * a) % M;
            b /= 2;
        }
        cout << r << endl;
    }
    return 0;
}
