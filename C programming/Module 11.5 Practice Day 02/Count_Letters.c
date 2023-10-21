#include<stdio.h>
#include<string.h>
int main()
{
  
    
    int arr[26]={0};

      char ch;

    int i=0;
    while(scanf("%c",&ch)!=EOF)
    {
        int val=ch-'a';
        arr[val]++;
 
       
    }

    for(int i='a';i<='z';i++)
    {
       
       
        if(arr[i-'a'] !=0)
        {
         printf("%c : %d\n",i,arr[i-'a']);
        }
       
    }
    return 0;
}