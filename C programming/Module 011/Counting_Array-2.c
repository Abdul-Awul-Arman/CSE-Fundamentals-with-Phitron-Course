#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int a[26]={0};
    scanf("%s",s);

    for(int i=0;i<strlen(s);i++)
    {
       int  va=s[i]-97;
        a[va]++;

    }
    for(int i=0;i<strlen(s);i++)
    {
      int valu=s[i]-97;
       if(a[valu] !=0)
       {
        

       printf("%c-%d\n",valu+97,a[valu]);

       a[valu]=0;
       }
    } 
    return 0;
}