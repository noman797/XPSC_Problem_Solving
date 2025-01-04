#include<bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve()
{
         int n;
        cin >> n;
        vector<int>a(n);
        vector<ll>b(n);
        string s;
        for(int i=0;i<n;i++) 
        {
            cin>>a[i];
            b[i]=a[i];
            if(i!=0) 
            b[i]+=b[i-1];
        }
        cin>>s;
        ll ans=0;
        int l=0,r=n-1;
        while(l<r) 
        {
            if(s[l]!='L') 
            {l++; continue;}
            if(s[r] != 'R') 
            {r--; continue;}
            if(l!=0) 
            ans+=b[r]-b[l-1];
            else ans+=b[r];
            s[l]=s[r]='.';
            l++; r--;
        }
        cout<<ans<<endl;


}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int tc; cin >> tc;
    while(tc--)
        solve();
 
    return 0;
}