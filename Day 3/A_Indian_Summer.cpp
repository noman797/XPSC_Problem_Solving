#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);

    int n;
    cin>>n;
    set<string>l;

    for(int i=0;i<n;i++)
    {
        string s,c; cin>>s>>c;
        string ll=s+" "+c;
        l.insert(ll);
    }

    cout<<l.size()<<endl;

    return 0;
}