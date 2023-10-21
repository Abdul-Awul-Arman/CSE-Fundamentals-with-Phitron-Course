#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int f=a-b;

    if(f>=0)
    {
        printf("%d",f);
    }
    else
    {
        printf("0");
    }
    return 0;
}