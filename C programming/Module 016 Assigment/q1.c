#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int s=n-1,k=1;

    for(int i=1;i<=n*2-1;i++)
    {
        for(int j=1;j<=s;j++)
        {
            printf(" ");

        }
        for(int j=1;j<=k;j++)
        {
            printf("%d",j);
        }
        if(i<=4)
        {
            s--;
            k+=2;
        }
        if(i>=5)
        {
            k-=2;
            s++;
        }    
        printf("\n");
    }
    return 0;
}