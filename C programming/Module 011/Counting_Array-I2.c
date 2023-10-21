#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int can[1000]={0};

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++)
    {
        int val=a[i];
        can[val]++;
    
    }

    for(int i=0;i<n;i++)
    {
        if(can[i] !=0)
        {
        printf("%d = %d\n",i,can[i]);
        }
    }
    
    return 0;
}