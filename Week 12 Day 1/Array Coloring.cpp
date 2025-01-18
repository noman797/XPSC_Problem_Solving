#include<bits/stdc++.h>
using namespace std;
#define yes                 cout<<"YES"<<endl
#define no                  cout<<"NO"<<endl

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int odd=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]%2!=0)
            {
                odd++;
            }
        }
        if(odd%2==0) yes;
        else
        no;

    }
    
    return 0;
}