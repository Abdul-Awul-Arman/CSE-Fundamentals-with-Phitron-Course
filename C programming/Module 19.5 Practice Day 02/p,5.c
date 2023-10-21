#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int min=INT_MAX,con=0;
      for(int i=0;i<n;i++)
    {
       if(a[i]<min)
       {
         min=a[i];
       }
    }

     for(int i=0;i<n;i++)
    {
       if(a[i]==min)
       {
         con++;
       }
    }

    if(con%2==0)
    {
        printf("Lucky");
    }
    else
    {
         printf("Unlcky");
    }

    return 0;
}