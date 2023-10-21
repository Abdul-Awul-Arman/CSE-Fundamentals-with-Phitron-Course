#include<stdio.h>
int main()
{
    int num;
    // int dvd=num/2;
    scanf("%d",&num);
    if(num<0)
    {
        printf("negative integer\n");
    }
    else if(num%2==0)
    {
        printf("number is even\n");
    }
    else
    {
        printf("number is odd\n");
    }

    return 0;
}