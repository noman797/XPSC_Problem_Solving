#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);

    string s;
    cin>>s;

    for(int i=97;i<=122;i++)
    {
        bool f=false;
        for(int j=0;j<s.size();j++)
        {
            if(s[j]==(char)i)
            {
            f=true;
            break;
            }
        }

        if(f==false)
        {
            cout<<(char)i<<endl;
            return 0;
        }
    }

    cout<<"None"<<endl;
    return 0;
}