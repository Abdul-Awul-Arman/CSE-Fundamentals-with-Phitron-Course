#include<stdio.h>
void SortNumbers(void)
{
    int arr[3];
    for(int i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);

    }
    int a=arr[0],b=arr[1],c=arr[2];


    for(int i=0;i<3-1;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            if(arr[i]>arr[j])
            {
                int tem=arr[i];
                arr[i]=arr[j];
                arr[j]=tem;
            }
        }
    }

    for(int i=0;i<3;i++)
    {
        printf("%d\n",arr[i]);

    }
    printf("\n");
    printf("%d\n%d\n%d\n",a,b,c);

}
int main()
{
    SortNumbers();
    return 0;
}