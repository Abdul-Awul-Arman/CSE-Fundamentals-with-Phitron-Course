#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%s",&a);

    // int stl=strlen(a);

    int cou=0;

   for(int i=0;a[i] !='\0';i++)
   {
    cou++;
   }
   printf("%d",cou);



    return 0;
}