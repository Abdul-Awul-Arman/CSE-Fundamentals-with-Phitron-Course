#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
int a[N];
void Merge(int mid,int l,int r)
{
     int left=mid-l+1;
     int right=r-mid;


     int L[left+1];
     int R[right+1];


     for(int i=l,j=0;i<=mid;i++,j++)
     {
        L[j]=a[i];
     }


     for(int i=mid+1,j=0;i<=r;i++,j++)
     {
        R[j]=a[i];
     }


     L[left]=INT_MAX;
     R[right]=INT_MAX;
     int lp=0,rp=0;


    for(int i=l;i<=r;i++)
    {
       if(R[rp]<=L[lp])
       {
          a[i]=R[rp];
          rp++;
       }
       else
       {
          a[i]=L[lp];
          lp++;
       }
    }


}
void MeargeSort(int l,int r)
{
    if(l==r) return;
    int mid=(l+r)/2;
    MeargeSort(l,mid);
    MeargeSort(mid+1,r);
    Merge(mid,l,r);
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];


    MeargeSort(0,n-1);


    for(int i=n-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
