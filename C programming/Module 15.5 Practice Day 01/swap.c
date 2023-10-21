#include<stdio.h>
void swap_it(int *apoint,int *bpoint)
{
    *apoint=20;
    *bpoint=10;
}
int main()
{
    int a=10,b=20;
    swap_it(&a,&b);
    printf("%d %d",a,b);
    return 0;
}