#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    double a = x + 0.5 * y + 4 - (x + y + z);
    double b = 0.5 * y + z;

    if (a > b)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
