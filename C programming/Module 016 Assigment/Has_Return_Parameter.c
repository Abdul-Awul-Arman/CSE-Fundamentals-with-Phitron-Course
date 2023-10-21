//Has_Return_Parameter
#include<stdio.h>
int add(int a,int b)
{
    int add=a+b;
    return add;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    printf("%d",add(a,b));
    return 0;
}