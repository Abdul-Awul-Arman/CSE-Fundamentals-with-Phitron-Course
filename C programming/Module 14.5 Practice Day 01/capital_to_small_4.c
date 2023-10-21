#include<stdio.h>
void capital_to_small_4(void)
{   
    char capital;
    scanf("%c",&capital);

    if(capital>='A' && capital<='Z')
    {
        char y=capital+32;
        printf("%c",y);
    }
}
int main()
{
    capital_to_small_4();
    
    return 0;
}