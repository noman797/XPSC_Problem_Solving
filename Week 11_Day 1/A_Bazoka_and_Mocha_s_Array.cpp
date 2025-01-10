#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }

        int p = 0;
        for (int i = 1; i < n; i++)
        {
            if (v[i] > v[i + 1])
            {
                p = i;
                break;
            }
        }

        if (p == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            bool f = false;
            for (int i = p + 1; i <= n; i++)
            {
                int j = (i % n) + 1;
                if (v[i] > v[j])
                {
                    f = true;
                    break;
                }
            }
            if (f)
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }
        }
        

  
}
  return 0;
}