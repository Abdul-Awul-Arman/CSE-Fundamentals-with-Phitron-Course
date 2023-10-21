#include<stdio.h>
#include<string.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);

    int con[n];
    int a[m+1];

    for(int i=0;i<m+1;i++)
    {
        a[i]=0;
    }
   

    for(int i=0;i<n;i++)
    {
        scanf("%d",&con[i]);
    }

    for(int i=0;i<n;i++)
    {
        int val=con[i];
        a[val]++;
    }



    for(int i=1;i<=m;i++)
    {
      
        printf("%d\n",a[i]);
        
    }
    
    return 0;
}