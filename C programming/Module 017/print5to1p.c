#include<stdio.h>
void print_5_to_1 (int i)
{
    if(i==6) return;
    print_5_to_1( i+1 );
    printf("%d\n",i);
}
int main()
{
    print_5_to_1(1);
    
    return 0;
}