#include<stdio.h>
char capital_to_small_2(void)
{   char capital;
    scanf("%c",&capital);

    if(capital>='A' && capital<='Z')
    {
        char x=capital+32;
        return x;
    }
}
int main()
{
    char x=capital_to_small_2();

    printf("%c",x);
    return 0;
}