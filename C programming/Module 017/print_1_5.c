#include<stdio.h>
void fun(int i)
{
    if(i==6)
    {
        return ;
    }
    printf("%d\n",i);

    fun(1+i);
    
}
int main()
{
    fun(1);
    return 0;
}