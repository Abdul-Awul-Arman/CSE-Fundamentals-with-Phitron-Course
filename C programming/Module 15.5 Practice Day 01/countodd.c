#include<stdio.h>
int count_odd(int *arr, int n)
{
    // int p=*arr;
    int cd=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            cd++;
        }
        
    }
    return cd;


}
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

    int cd=count_odd(&ar[0],n);

    printf("%d",cd);


    
    return 0;
}