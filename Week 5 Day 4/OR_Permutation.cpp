#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = n - 1; i >= 0; i--)
            cout << i + 1 << ' ';
        cout << endl;
    }

    return 0;
}
