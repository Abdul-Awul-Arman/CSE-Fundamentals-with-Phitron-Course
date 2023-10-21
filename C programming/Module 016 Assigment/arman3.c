#include<stdio.h>
#include<string.h>
int palindrome(char string[])
{
    int ans=1;
    int n= strlen(string);
    int i=0;
    int j=n-1;
    
    while(i>j)
    {
      if(string[i] != string[j])
      {
        ans=0;
      }
      i++;
      j--;
    }
    return ans;

}
int main()
{
    char s[100];    scnaf("%s",s);

    int answer=palindrome(s);

    if(answer==1)
    {
        printf("Palindrome");
    }
    else if(answer==0)
    {
        printf("Not Palindrome");
    }


    
    return 0;
}