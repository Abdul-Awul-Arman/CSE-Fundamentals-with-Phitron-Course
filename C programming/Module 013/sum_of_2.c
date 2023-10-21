#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int x,ans=0;
    scanf("%d",&x);


    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==x)
            {
                ans=1;
               
            }

    
        }
    }

    if(ans==0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    return 0;
}