#include<stdio.h>
void world (void)
{
    printf("world");
}
void hello (void)
{
    printf("hello");
    world();
}
int main()
{
    hello();
    
    return 0;
}