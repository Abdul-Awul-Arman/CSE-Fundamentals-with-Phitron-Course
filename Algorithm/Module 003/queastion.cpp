#include<bits/stdc++.h>
using namespace std;
void Merge(vector<int> &a,int mid,int l,int r)
{
     int left=(mid-l)+1;
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
        if(R[rp]>=L[lp])
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
void MeargeSort(vector<int> &a,int l,int r)
{
    if(l==r);
    int mid=(l+r)/2;
    MeargeSort(a,l,mid);
    MeargeSort(a,mid+1,r);
    Merge(a,mid,l,r);
}
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    MeargeSort(a,0,n-1);

    cout<<"x"<<endl;

    for(int val:a)
    {
        cout<<val<<" ";
    }
    return 0;
}