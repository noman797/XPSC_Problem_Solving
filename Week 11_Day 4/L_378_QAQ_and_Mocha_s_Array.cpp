#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        
        int pos = 0;
        for (int i = 1; i < n; i++) {
            if (a[i] > a[i + 1]) {
                pos = i;
                break;
            }
        }
        
        if (!pos) {
            cout << "Yes" << endl;
        } else {
            int fl = 0;
            for (int i = pos + 1; i <= n; i++) {
                int j = (i % n) + 1;
                if (a[i] > a[j]) {
                    fl = 1;
                    break;
                }
            }
            if (!fl) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
}
