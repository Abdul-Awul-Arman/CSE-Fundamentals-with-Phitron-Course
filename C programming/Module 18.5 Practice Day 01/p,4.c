#include<stdio.h>
int print_arr(int *arr,int n,int i)
{
    if(i==n)
    {
        return 0;
    }

   

     
     int sum=print_arr(arr,n,i+1);
    return sum+ arr[i];

 
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

    int sum_of_arr= print_arr(arr,n,0);

    printf("%d",sum_of_arr);


    return 0;
}