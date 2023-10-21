#include<stdio.h>
#include<string.h>
int main()
{
    char s[1002];
    int big=0,sm=0;
    scanf("%s",s);

    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            sm++;
        }

         if(s[i]>='A' && s[i]<='Z')
        {
            big++;
        }
    }
    printf("%d %d",big,sm);
    return 0;
}