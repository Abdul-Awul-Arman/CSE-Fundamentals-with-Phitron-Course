#include<stdio.h>
int main()
{
    int round;
    scanf("%d",&round);

    int tiger=0,pathan=0;

    for(int i=1;i<=round;i++)
    {
            int x1,x2;
        scanf("%d %d",&x1,&x2);

        if(x1>x2)
        {
           tiger++;
        }
        
        else if(x1<x2)
        {
           pathan++;
        }

    }

    if(tiger>pathan)
    {
        printf("Tiger\n");
    }
    
    else if(tiger<pathan)
    {
        printf("Pathan\n");
    }
    else if(tiger==pathan)
    {
        printf("Draw\n");
    }
    
    return 0;
}