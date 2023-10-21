#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int even=0;
    if(n%2==1)
    {
        cout<<"-1"<<endl;
    }
    else
    {
         for(int i=0;i<n;i++)
         {
            if(a[i]%2==0)
            {
                even++;
            }
         }
         

         cout<<abs(even-n/2)<<endl;
    }
    }
    return 0;
}