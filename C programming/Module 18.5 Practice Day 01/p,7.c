#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);

    int arr[n] [m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i] [j]);
        }
    }
   
    int flag=1,x;
    scanf("%d",&x);


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           if(arr[i] [j]==x)
           {
            flag=0;
           }
        }

    } 

    if(flag==0)
    {
        printf("will not take number");
    }  
    else
    {
        printf("will take number");
    }


    return 0;
}