#include<stdio.h>
void print_arr_with_recasion(int*arr,int i,int n)
{
    if(i==n) 
    {
        return;
    }
    print_arr_with_recasion(arr,i+1,n);
    printf("%d ",arr[i]);
    

}
int main()
{
    int n;
    scanf("%d",&n);
    int arry[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arry[i]);
    }

    print_arr_with_recasion(arry,0,n);
    return 0;
}