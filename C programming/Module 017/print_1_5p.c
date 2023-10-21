#include<stdio.h>
void printf_1_5(int i)
{
    if(i==6) return;
    printf("%d\n",i);

    printf_1_5( i+1);


}
int main()
{
    printf_1_5(1);
    
    return 0;
}