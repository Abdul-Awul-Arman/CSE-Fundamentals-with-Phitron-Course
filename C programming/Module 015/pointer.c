#include<stdio.h>
int main()
{
    int x=100;

    int *ptr=&x;

    // printf("%p\n",&x);
    // printf("%p\n",ptr);
    // printf("%p\n",&ptr);
    // printf("%d\n",sizeof(ptr));
    x=200;

    int* ptr2=&ptr;

    printf("%d\n",x);
    printf("%p",&ptr2);

    return 0;
}