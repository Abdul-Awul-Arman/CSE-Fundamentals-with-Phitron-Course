#include<stdio.h>

void sum(int a,int b)
{
    int sum=a+b;
    printf("%d",sum);
}

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    sum(x,y);

    return 0;
}