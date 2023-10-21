#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,z; //z is query;
    cin>>x>>z;

    int a[x];

    for(int i=0;i<x;i++)
    {
        cin>>a[i];
    }

    while(z--)
    {
        int l,r;
        cin>>l>>r;
        int sum=0;
        l--;
        r--;

        for(int i=l;i<=r;i++)
        {
           sum+=a[i];
        }
        cout<<sum<<endl;
    }


    return 0;
}