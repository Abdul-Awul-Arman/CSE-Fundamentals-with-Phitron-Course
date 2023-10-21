#include<stdio.h>
int  my_len(char s[])
{
    int len=0;
    for(int i=0;s[i]!='\0';i++)
    {
        len++;
    }
    return len;
}
int main()
{
   char str[100];
   scanf("%s",&str);

   int len=my_len(str);

   printf("%d",len);

    
    return 0;
}