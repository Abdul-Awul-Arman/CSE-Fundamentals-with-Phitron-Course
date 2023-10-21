#include<stdio.h>
int my_abs(int a)
{
    if(a<0)
    {
        return (a)*-1;
    }
    else
    {
        return a;
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    
    printf("%d",my_abs(a));
    
    return 0;
}