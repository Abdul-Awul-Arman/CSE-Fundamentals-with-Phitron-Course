#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);

    if(a>=47 && a<=57)
    {
        printf("digit");
    }
    else
    {
        printf("Alpha\n");
        if(a>='a' && a<='z')
        {
            printf("small case");
        }
        else
        {
            printf("Capital Case");
        }
    }

    return 0;
}