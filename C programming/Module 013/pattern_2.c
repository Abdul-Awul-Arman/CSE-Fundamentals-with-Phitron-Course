#include<stdio.h>
#include<string.h>
int main()
{
    int n,s,k;
    scanf("%d",&n);

    k=(n*2)-1;
    s=1;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<s;j++)
        {
            printf(" ");
        }
        for(int j=0;j<k;j++)
        {
            printf("*");
        }
        k=k-2;
        s++;
        printf("\n");

    }
    return 0;
}