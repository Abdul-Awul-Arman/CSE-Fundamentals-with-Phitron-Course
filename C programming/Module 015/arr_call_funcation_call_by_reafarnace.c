#include<stdio.h>
int main()
{
    
    int a=10,b=20;

    int *p=&a;
    int *q=&p;
    *p=20;

    printf("%d %d\n",a,b);

    printf("%p %p\n",&a,&b);
    
    printf("%p %p\n",&p,&q);
    printf("%p %p",p,q);
    return 0;
}