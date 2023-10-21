#include<stdio.h>
int main()
{
    char chr;
    scanf("%c",&chr);

    if(chr>='A' && chr<'Z')
    {
        printf("%c",chr+1);
    }
    else if(chr=='Z')
    {
        printf("A");

    }
    else if(chr>='a' && chr<'z')
    {
        printf("%c",chr+1);
    }
    else if(chr=='z')
    {
        printf("a");
    }
        

    return 0;
}