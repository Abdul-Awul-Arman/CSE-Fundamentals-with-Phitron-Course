#include<stdio.h>
char smalltocapital(char small)
{
   
    if( small>='a' && small<='z' )
    {
         char x=small-32;
         return x;
    }

}
int main()
{
    char x;
    scanf("%c",&x);

    char a=smalltocapital(x);

    printf("%c",a);
    


    
    return 0;
}