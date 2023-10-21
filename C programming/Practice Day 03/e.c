#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    int pos;

    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
     
     int low=INT_MAX;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]<=low)
        {
            low=a[i];
            pos=i;
            
        }
    
    }
    printf("%d %d ",low,pos+1);


    return 0;
}