#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);

    int fst,sst;

    fst=a%10;
    sst=a/10;

    if(a>=10 && a<=100)
    {
        if(fst%sst==0 || sst%fst==0)

        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    
    

    return 0;
}