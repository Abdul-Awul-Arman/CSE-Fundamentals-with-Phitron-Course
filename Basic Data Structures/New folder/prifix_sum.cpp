
#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int x,z; //z is query;
    cin>>x>>z;

     long long int a[x];

    for(int i=0;i<x;i++)
    {
        cin>>a[i];
    }

    int pr[x];
    pr[0]=a[0];

    for(int i=1;i<x;i++)
    {
        pr[i]=a[i]+pr[i-1];
    }
   
    while(z--)
    {
        long long int l,r;
        cin>>l>>r;
        long long int sum=0;
        l--;
        r--;
        if(l==0) sum=pr[r];
        else sum=pr[r]-pr[l-1];

        
        cout<<sum<<endl;
    } 


    return 0;
}