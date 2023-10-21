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

    sort(a,a+n);

    bool flag=false;

    int l=0,r=n-1;
    
    int x;
    cin>>x;

    while(l<=r)
    {
        int mid=(l+r)/2;

        if(a[mid]==x)
        {
            flag=true;
            break;
        }
        else if(x>a[mid])
        {
            l=mid+1;
        }
        else if (x<a[mid])
        {
            r=mid-1;
        }
        
    }
    if(flag==true)cout<<"Found";
    else cout<<"Not Found";

    
    return 0;
}