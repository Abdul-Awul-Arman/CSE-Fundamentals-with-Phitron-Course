#include<stdio.h>
#include<string.h>
void fun(char *arr)
{
   printf("%d",strlen(arr));
}
int main()
{
    char a[100]="arman";

    fun(a);
    return 0;
}