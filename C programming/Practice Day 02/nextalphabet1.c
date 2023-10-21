#include<stdio.h>
int main()
{
    char x;
    scanf("%c",&x);

    if(x>='a' && x<'z')
    {
        printf("%c",x+1);

    }

    if(x=='z')
    {
        printf("a");
    }
    return 0;
}