#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<string> s(n);
    
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    
    map<string, int> mp;
    string str = "";
    
    for (int it = s.size() - 1; it >= 0; it--) {
        string st = s[it];
        
        if (mp.find(st) != mp.end())
            continue;
        else {
            str += st[st.size() - 2];
            str += st[st.size() - 1];
            mp[st]++;
        }
    }
    
    cout << str << endl;
    
    return 0;
}
