#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);

    int s,t;
    cin>>s>>t;
    int cnt = 0;
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
        {
            for(int k=0;k<s;k++)
            {
                if(i+j+k<=s and i*j*k<=t)
                {
                    cnt++;
                }

            }
        }
    }

    cout<<cnt<<endl;

    return 0;
}