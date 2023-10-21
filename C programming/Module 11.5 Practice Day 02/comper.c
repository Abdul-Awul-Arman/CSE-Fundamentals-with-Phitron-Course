#include<stdio.h>
#include<string.h>
int main()
{
    char x[100],y[100];
    scanf("%s %s",x,y);

    int i=0;
    while(1)
    {
        if(x[i]=='\0' && y[i]=='\0')
        {
            printf("%s",x);
            break;
        }
        else if(x[i]=='\0')
        {
            printf("%s",y);
            break;
        }
         else if(y[i]=='\0')
        {
            printf("%s",x);
            break;
        }

        if(x[i]==y[i])
        {
            i++;
        }
        else if(x[i]<y[i])
        {
            printf("%s",x);
            break;
        }
        else if(y[i]<x[i])
        {
            printf("%s",y);
            break;
        }

    }

    

   
    return 0;
}