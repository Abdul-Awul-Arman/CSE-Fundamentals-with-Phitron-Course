#include<stdio.h>
int main()
{
    int n,sst,fst;
    scanf("%d",&n);

    sst=n/10;
    fst=n%10;

   if(n>=10 && n<=99 )
   {
    if(fst%sst==0 || sst%fst==0)
    {
        printf("YES");
 
    }
    else
    {
        printf("NO");

    }
   }
    return 0;
}