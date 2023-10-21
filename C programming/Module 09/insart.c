#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    int ar[n+1]; 

    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);

    }
    int pos,valu;
    scanf("%d %d",&pos,&valu);

    for(int i=n;i>=pos+1;i--)
    {
        ar[i]=ar[i-1];
    } 

    ar[pos]=valu;
    
    for(int i=0;i<=n;i++)
    {
        printf("%d ",ar[i]);
    }
    


    return 0;
}