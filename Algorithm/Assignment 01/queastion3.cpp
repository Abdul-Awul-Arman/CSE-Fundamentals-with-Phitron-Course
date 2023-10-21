#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int  flag=-1;
    int x;
    cin>>x;
    int l=0,r=n-1;
    while(l<=r)
    {
        int mid=(l+r)/2;

        if(a[mid]==x)
        {
            flag=mid;
            break;
            
        }
        else if(x>a[mid])
        {
            l=mid+1;
        }
        else if(x<a[mid])
        {
            r=mid-1;
        }
    }

    if(a[flag]==a[flag+1]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;



    return 0;
}