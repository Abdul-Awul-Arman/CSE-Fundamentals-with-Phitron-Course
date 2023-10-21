//No Return + Parameter
#include<stdio.h>

void string(char string[])
{
    printf("%s",string);

}

int main()
{
    char s[100];
    scanf("%s",s);
    
    string(s);
    return 0;
}