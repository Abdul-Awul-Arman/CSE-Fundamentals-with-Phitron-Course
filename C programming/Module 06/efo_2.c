#include<stdio.h>
int main()
{
    int a,s;

    while(scanf("%d %d",&a,&s)!=EOF)
    {
        if(a==1999)
        {
            printf("Correct\n");

            break;
        }
        else
        {
            printf("Worng\n");
        }
    }


    return 0;
}