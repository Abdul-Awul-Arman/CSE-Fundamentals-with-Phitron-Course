#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",s);
    int con[26]={0};

    for(int i=0;i<strlen(s);i++)
    {
        con[s[i]-97]++;
    }

    for(int i=0;i<26;i++)
    {
        printf("%c - %d\n",i+97,con[i]);
    }


    return 0;
}