#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);

    int a,b;
    cin>>a>>b;

    int p1=a+(a-1);
    int p2=b+(b-1);
    int p3=(a+b);

    int ans=max({p1,p2,p3});

    cout<<ans<<endl;


    return 0;
}