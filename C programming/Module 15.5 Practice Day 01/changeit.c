#include<stdio.h>
void change_it(int arr[],int n)
{
   int *p=(arr+n-1);
   *p=100;
    
}
int main()

{
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    change_it(&arr[0],n);

     for(int i=0;i<n;i++)
    {
       printf("%d ",arr[i]);
    }


    return 0;
}