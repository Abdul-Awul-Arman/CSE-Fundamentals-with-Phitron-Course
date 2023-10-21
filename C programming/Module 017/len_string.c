#include<stdio.h>
int string(char st[],int i)
{
   if(st[i]=='\0') return 0;
   int l= string(st,i+1);
   return 1+l;

}
int main()
{
    char s[6]="arman";

    int len=string(s,0);
    printf("%d",len);



    return 0;
}