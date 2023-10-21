#include<stdio.h>
int main()
{   int a=10,b=20,c=3;
    
    int sum=a+b;
    int sub=a-b;
    float dvd=b*1.0/c;
    int mul=a*b;

    printf("%d %d %0.2f,%d",sum,sub,dvd,mul);
    return 0;
}