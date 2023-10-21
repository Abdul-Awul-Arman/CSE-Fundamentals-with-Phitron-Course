#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    for(int i=1;i<=12;i++)
    {
        scanf("%d",&n);
        printf("%d X %d=%d\n",n,i,n*i);
    }

    return 0;
}