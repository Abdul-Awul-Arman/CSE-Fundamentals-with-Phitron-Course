#include<stdio.h>
int count_before_zero(int *arry,int n)
{
    int cou=0;

    for(int i=0;*(arry+i) !=0 ;i++)
    {
        cou++;

    }

    return cou;

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

    int con=count_before_zero(&arr[0],n);

    printf("%d ",con);


    
    return 0;
}