#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);   
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> a(n);
    long long s = 0;
    int m = INT_MAX;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        s += a[i];
        if (a[i] % 2 != 0) {
            m = min(m, a[i]);
        }
    }

    if (s % 2 == 0) {
        cout << s << endl;
    } else {
        cout << s - m << endl;
    }

    return 0;
}
