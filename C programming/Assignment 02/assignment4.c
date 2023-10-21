#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int ar [n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        
        
    }
    int x,v;
    scanf("%d %d",&x,&v);

    ar[x]=ar[x]+v;

    printf("%d",ar[x]);
    return 0;
}