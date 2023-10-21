#include<stdio.h>
#include<limits.h>
int main()
{
    int n,a,max=INT_MIN,mini=INT_MAX;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a>max)
        {
            max=a;

        }
        if(a<mini)
        {
            mini=a;
        }
    }
    printf("%d %d",max,mini);
    return 0;
}