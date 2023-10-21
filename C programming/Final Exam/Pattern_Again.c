#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int s=n-1,k=1,l=3;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=s;j++)
        {
          printf(" ");
        }

        if(i%2==1)
        {
             for(int j=1;j<=k;j++)
             {
                printf("^");
             }
        }
        else if(i%2==0)
        {
          for(int j=1;j<=l;j++)
          {
              printf("*");
          }
        }

        s--;
        if(i%2==0)
        {
           k+=4; //k="^"
        }
        if(i%2==0)
        {
            l=l+4; //l="*"
        }

        printf("\n");
    }
    return 0;
}