#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    fgets(a,14,stdin);
    a[11]='\0';
   
    printf("%s",a);
    
    return 0;
}