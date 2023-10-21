#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",s);

    int con=0;

    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='u' || s[i]=='o')
        {
            con++;
        }
    }
    printf("%d",con);
    return 0;
}