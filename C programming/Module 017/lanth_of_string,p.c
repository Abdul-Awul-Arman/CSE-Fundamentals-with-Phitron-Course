#include<stdio.h>
int lant_of_string(char string[],int i)
{
    if(string[i]=='\0')
    {
        return 0;
    }
    int l=lant_of_string(string,i+1);

    return l+1;

   
}
int main()
{
    char string[100];
    scanf("%s",string);

    int l=lant_of_string(string,0);

    printf("%d",l);

    return 0;
}