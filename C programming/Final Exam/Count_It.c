#include<stdio.h>
#include<string.h>
int main()
{
    char s[1005];
    fgets(s,10005,stdin);

   int capital=0,small=0,space=0;

   for(int i=0;i<strlen(s);i++)
   {
        if(s[i]>='A' && s[i]<='Z')
        {
            capital++;
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            small++;
        }
        else if(s[i]==' ')
        {
            space++;
        }
   }

   printf("Capital - %d\nSmall - %d\nSpaces - %d\n",capital,small,space);


    
    return 0;
}