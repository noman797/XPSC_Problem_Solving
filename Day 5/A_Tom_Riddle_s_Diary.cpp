#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);

    int n; cin>>n;
    vector<string>s(n);

    for(int i=0;i<n;i++)
    {
        int f=false;
        cin>>s[i];

        for(int j=0;j<i;j++)
        {
            if(s[i]==s[j])
            {
                f=true;
                break;
            }
        }

        if(f)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    

    return 0;
}