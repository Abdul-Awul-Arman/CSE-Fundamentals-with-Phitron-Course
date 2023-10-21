#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int c[1000]={0};

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

 
    for(int i=0;i<n;i++)
    {
      
    
        c[a[i]]++;
    }
    
    for(int i=0;i<=9;i++)
    {
        printf("%d -coun %d\n",i,c[i]);
    }
    return 0;
}