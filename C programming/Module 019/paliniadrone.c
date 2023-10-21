#include<stdio.h>
#include<string.h>
int main()
{
    char s[10005],c[10005];
    scanf("%s",s);
    strcpy(c,s);

    int i=0,j=strlen(c)-1;
    while(i<j)
    {
        char tem=c[i];
        c[i]=c[j];
        c[j]=tem;
        i++;
        j--;

    }

    if(strcmp(s,c)==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    




    return 0;
}