#include<stdio.h>
char capital_to_small(char capital)
{
    if(capital>='A' && capital<='Z')
    {
        char x=capital+32;
        return x;
    }
    
}
int main()
{
    char capital;
    scanf("%c",&capital);

    char x=capital_to_small(capital);

    printf("%c",x);
    
    return 0;
}