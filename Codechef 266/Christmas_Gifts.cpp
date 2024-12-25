#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) 
    {
        int h,l,w;
        cin>>h>>l>>w;
        int ans=2*(h*l+l*w+w*h);
        cout<<1000/ans<<endl;
    }

    return 0;
}