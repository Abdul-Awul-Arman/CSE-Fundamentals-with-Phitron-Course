#include<stdio.h>
int main()
{

   int test;
   scanf("%d",&test);

   for(int i=0;i<test;i++)
   {
         long long int s,a,b,c;
    scanf("%lld %lld %lld %lld",&s,&a,&b,&c);

    long long int ans=s-(a+b+c);

    printf("%lld\n",ans);
   }


    return 0;
}