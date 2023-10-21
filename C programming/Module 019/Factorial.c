#include<stdio.h>
long long int fac(long long int x)
{
    if(x==0) return 1;
    long long int ans=fac(x-1);

    return ans*x;
}
int main()
{
    long long int n;
    scanf("%lld",&n);

    long long int ans=fac(n);

    printf("%lld",ans);

    return 0;
}