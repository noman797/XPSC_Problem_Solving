#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];

    int s=0,d=0;
    int l=0,r=n-1,t=0;
    while(l<=r)
    {
        if(t%2==0)
        {
            if(v[l]>v[r])
            {
                s+=v[l];
                l++;
            }
            else
            {
                s+=v[r];
                r--;
            }
        }

        else
        {
           if(v[l]>v[r])
           {
            d+=v[l];
            l++;
           }
           else
           {
            d+=v[r];
            r--;
           }
        }
        t++;
    }

    cout<<s<<" "<<d<<" "<<endl;
    return 0;
}