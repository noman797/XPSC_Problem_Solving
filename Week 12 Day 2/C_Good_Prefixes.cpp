#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;
        long long arr[n];

        for (int i=0;i<n;i++) 
        {
            cin >> arr[i];
        }

        int max=arr[0];
        long long sum=0;
        int good=0;

        for (int i=0; i<n;i++) 
        {
            if (arr[i]>max) 
            {
                max=arr[i];
            }
            sum=sum+arr[i];
            if (sum==2*max||(i==0 &&arr[0]==0)) 
            {
                good++;
            }
        }

        cout << good << endl;
    }

    return 0;
}