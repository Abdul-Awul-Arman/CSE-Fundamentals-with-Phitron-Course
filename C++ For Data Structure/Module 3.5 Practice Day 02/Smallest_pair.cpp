#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;

    for(int s=0;s<test;s++)
    {               
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int mymin=INT_MAX;
    int m;

    for(int i=0;i<n-1;i++)
    {
        
        for(int j=i+1;j<n;j++)
        {
             m=a[i]+a[j]+j-i;
             mymin=min(mymin,m);
             cout<<m<<endl;
        }

        
    
    }

    // cout<<mymin<<endl;
    }
    
    return 0;
}