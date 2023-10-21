#include<stdio.h>
int main()
{
    int n,sum_e=0,sum_odd=0;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        int v;
        scanf("%d",&v);

        if(v%2==00)
        {
            sum_e=sum_e+v;
        }
        else
        {
            sum_odd=sum_odd+v;
        }
    }
    printf("%d %d",sum_e,sum_odd);
    return 0;
}