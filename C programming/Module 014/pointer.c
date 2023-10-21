#include<stdio.h>
int main()
{
    int s=200;
    printf("%p\n",&s);

    int* p=&s;
    printf("%p\n",p);

    // printf("%d",*p);

    *p=500;
    printf("%d",s);
    return 0;
}