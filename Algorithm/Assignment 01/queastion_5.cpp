#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[n+1];
    for(int i=0;i<n;i++)cin>>x[i];

    int m;
    cin>>m;
    int z[m+1];
    for(int i=0;i<m;i++)cin>>z[i];

    x[n]=INT_MIN;
    z[m]=INT_MIN;
    

    int e=m+n;

    int New[e];

    int xptr=0,zptr=0;
    for(int i=0;i<e;i++)
    {
        if(x[xptr]>=z[zptr])
        {
            New[i]=x[xptr];
            xptr++;
        }
        else
        {
            New[i]=z[zptr];
            zptr++;
        }
    }

    for(int val:New)
    {
        cout<<val<<" ";
    }
    return 0;
}