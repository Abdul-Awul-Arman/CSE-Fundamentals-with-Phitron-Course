#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];

    int maxindx,minindx;
    int max=INT_MIN,min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            maxindx=i;
        }

        if(a[i]<minindx)
        {
            minindx=i;
        }
    }
    
    int tem=a[maxindx];
    a[maxindx]=a[minindx];
    a[minindx]=tem;
    
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}