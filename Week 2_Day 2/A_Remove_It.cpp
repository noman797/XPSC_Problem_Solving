#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);

    int n,x;
    cin>>n>>x;
    vector<int>a(n);
    for(int &x:a) cin>>x;

    vector<int>ans;

    for(int i=0;i<n;i++)
    {
        if(a[i]!=x)
        {
            ans.push_back(a[i]);
        }
    }

    for(int x: ans )
    {
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}