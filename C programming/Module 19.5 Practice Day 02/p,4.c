#include<stdio.h>
int main()
{
    long long int n,k;
    scanf("%lld %lld",&n,&k);

    long long int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                long long int tem=a[i];
                a[i]=a[j];
                a[j]=tem;
            }
        }
    }

   long long ans=0;

     for(int i=0;i<k;i++)
    {
        if(ans+a[i]>ans)
        {
            ans=ans+a[i];
        }
        
    }

    printf("%lld",ans);
   

    // for(int i=0;i<k;i++)
    // {
    //     ans=ans+a[i];
    // }

    // if(ans<0)
    // {
    //     printf("0");
    // }
    // else
    // {

    //     printf("%lld",ans);

    // }   




    
    return 0;
}