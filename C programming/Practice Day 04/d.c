#include<stdio.h>
#include<string.h>
int main()
{
    char a[11],b[11];
    scanf("%s %s",a,b);
    
    int lanta=strlen(a);
    int lantb=strlen(b);

    printf("%d %d\n",lanta,lantb);
    printf("%s%s\n",a,b);

    char tem=a[0];
    a[0]=b[0];
    b[0]=tem;

    printf("%s %s",a,b);

    return 0;
}