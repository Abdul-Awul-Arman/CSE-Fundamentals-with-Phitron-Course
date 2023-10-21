#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int A[n];

    for(int i=0;i<=n-1;i++)
   {
    scanf("%d",&A[i]);
   }
   for(int i=0;i<=n-1;i++)
   {
    if(A[i]<=10)
    {
        printf("A[%d] = %d\n",i,A[i]);
    }
    
   }

    return 0;
}