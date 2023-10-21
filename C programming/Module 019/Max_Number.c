#include<stdio.h>
#include<limits.h>
int max (int *arr,int n,int i)
{
    if(i==n) return INT_MIN;

     int max1=max(arr,n,i+1);

    if(arr[i]>max1)
    {
        return arr[i];
    }
    else
    {
        return max1;
    }
   
    

}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int ans=max(a,n,0);

    printf("%d",ans);


    return 0;
}