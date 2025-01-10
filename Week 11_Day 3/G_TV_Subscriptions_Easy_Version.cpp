#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n, k, d, cnt, mn;
    cin >> t;
    while (t--) {
        cin >> n >> k >> d;
        vector<int> v(n);
        for (int &x : v) cin >> x;
        
        map<int, int> m;
        cnt = 0;
        for (int i = 0; i < d; i++) {
            if (m[v[i]] == 0) cnt++;
            m[v[i]]++;
        }
        mn = cnt;
        for (int i = d; i < n; i++) {
            m[v[i - d]]--;
            if (m[v[i - d]] == 0) cnt--;
            if (m[v[i]] == 0) cnt++;
            m[v[i]]++;
            mn = min(mn, cnt);
        }
        cout << mn << endl;
    }
    return 0;
}
