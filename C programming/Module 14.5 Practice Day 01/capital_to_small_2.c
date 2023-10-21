#include<stdio.h>
void capitaltosmall(char capital)
{
    if(capital>='A' && capital<='Z')
    {
        char ans=capital+32;
        printf("%c",ans);
    }
}
int main()
{
    char capital;
    scanf("%c",&capital);

    capitaltosmall(capital);

    return 0;
}