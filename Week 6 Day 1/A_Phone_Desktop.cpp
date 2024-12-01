#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);

     int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;

        int m = (y + 1) / 2;
        x -= (m * 15 - y * 4);
        x = max(x, 0);
        m += (x + 14) / 15;

        cout << m << endl;
    }

    return 0;
}