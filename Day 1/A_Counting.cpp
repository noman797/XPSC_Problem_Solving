#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);

    int a,b;
    cin>>a>>b;
    if(a>b) 
    cout<<0<<endl;
    else
    cout<<b-a+1<<endl;
    return 0;
}