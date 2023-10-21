#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int i=0,j=n-1;
    while (i<j)
    {
        int tem=arr[i];
        arr[i]=arr[j];
        arr[j]=tem;

        i++;
        j--;

    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    

    return 0;
}