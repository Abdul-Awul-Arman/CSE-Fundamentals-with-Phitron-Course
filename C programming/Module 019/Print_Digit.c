#include<stdio.h>
void print_digit(int n)
{
    //base case//
    if(n==0) return;
    
    print_digit(n/10);
    printf("%d ",n%10);
    
}
int main()
{
    int test;
    scanf("%d",&test);

    for(int i=1;i<=test;i++)
    {
        int n;
      scanf("%d",&n);

      print_digit(n);

      if(n==0)
      {
        printf("0");
      }
      printf("\n");
    }
    


    return 0;
}