#include<stdio.h>
#include<string.h>
int main()
{
   int arr[26]={0};

   char ch;
   int i=0;
   while( scanf("%c",&ch) !=EOF)
   {
      int val=ch-97;

      arr [val]++;

   }

   for(int i=0;i<26;i++)
   {
    
    if(arr[i] !=0)
    {
        printf("%c : %d\n",i+97,arr[i]);
    }


   }
    return 0;
}