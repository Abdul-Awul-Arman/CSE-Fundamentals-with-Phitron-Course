#include<stdio.h>
#include<string.h>
int main()
{
    int n,s,k;
    scanf("%d",&n);
    s=n-1;
    k=1;

    for(int i=0;i<(2*n)-1;i++)
    {
        for(int j=0;j<s;j++)
        {
            printf(" ");
        }
        for(int j=0;j<k;j++)
        {
            printf("*");
        }
        if(i<n-1)
        {

        k=k+2;
        s--;
        }
        if(i>n+6)
        {
            k=k-2;
            s++;
        }
        printf("\n");

       

    }
    return 0;
}