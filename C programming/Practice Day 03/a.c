#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);

    long long int ar[n];
    
    for(int i=0;i<=n-1;i++)
    {
        scanf("%lld",&ar[i]);
    }
   long long int sum=0;

    for (int i=0;i<=n-1;i++)
    {
        sum=sum+ar[i];
    }
    

    if(sum<0)
    {
        printf("%lld",sum*-1);
    }
    else
    {
        printf("%lld\n",sum);

    }



    return 0;
}