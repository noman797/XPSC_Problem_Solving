#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);

    int n;
    cin>>n;
    vector<string>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    map<string,int>mp;
    for(int i=n-1;i>=0;i--)
    {
        if(mp.find(a[i])!=mp.end())
        {
            mp[a[i]]++;
        }
        else
        {
            cout<<a[i]<<endl;
            mp[a[i]]=1;
        }
    }

    return 0;
}