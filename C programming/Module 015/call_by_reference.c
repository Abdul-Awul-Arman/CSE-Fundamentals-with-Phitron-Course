#include<stdio.h>
#include<string.h>
void fun(int *p)
{
    *p=200;

    printf("%d\n",*p);
}
int main()
{
    int x=10;

    fun(&x);

    // printf("%d",x);

    return 0;
}