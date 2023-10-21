#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int maixmum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
         maixmum=max(a,maixmum);
    }

    cout<<maixmum;
    return 0;
}