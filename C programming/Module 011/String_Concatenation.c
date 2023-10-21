#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int lana=strlen(a);
    int lanb=strlen(b);
    
    strcat(a,b);

    // int j=lana;
    // for(int i=0;i<=strlen(b);i++)
    // {
    //   a[j]=b[i];

    //   j++;
    // }

    printf("%s",a);




    return 0;
}