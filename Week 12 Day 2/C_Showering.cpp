#include<bits/stdc++.h>
using namespace std;

void solve()
{

        int n,s,m;
        cin>>n>>s>>m;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i]>>b[i];
        }

        bool flag=false;

        if(a[0]>=s)
        {
            flag=true;
        }
        else
        {
            for(int i=1;i<n;i++)
            {
                if(a[i]-b[i-1]>=s)
                {
                    flag=true;
                    break;
                }
            }
        }

        if(flag==false and m-b[n-1]>=s)
        {
            flag=true;
        }

        if(flag==true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tc; cin>>tc;
    while(tc--)
    solve();

    return 0;
}