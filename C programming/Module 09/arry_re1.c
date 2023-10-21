#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    int j=n-1,tem;

    for(int i=0;i<j;i++)
    {
        tem=a[i];
        a[i]=a[j];
        a[j]=tem;

        i++;
        j--;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}