#include<stdio.h>
#include<string.h>
int main()
{
    char a[6];
    scanf("%s",&a);

    int lan=0;
    for(int i=0;a[i] !='\0';i++)
    {
        lan=lan+1;
    }
    printf("%d",sizeof(a));
    return 0;
}