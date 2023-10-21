#include<stdio.h>
int main()
{
    long long int e,m,b,res=0;
    scanf("%lld %lld %lld",&e,&m,&b);
     
     if(e ==0 || b== 0)
     {
        printf("0\n");
     }
     else
     {
        long long int min=m; //m24
        if(e <min) //e90
        {
            min=e;
        }
        if(b<min) //b 89
        {
            min=b;
        }
        e-=min;
        m-=min;
        b-=min;
        res+=min;
        
        if(e/2<b)
        {
            res+=e/2;
        }
        else
        {
             res=res+b;
        }
        printf("%lld",res);
     }
     

    return 0;
}