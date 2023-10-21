#include<stdio.h>
int main()
{
    float x,p,valuofx,ans;
    scanf("%f %f",&x,&p);
    
    valuofx=1-(x/100);

   ans=p/valuofx;

   printf("%.2f",ans);
    
    
    return 0;
}
