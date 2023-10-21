#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);

    int arr[row] [col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i] [j]);
        }
    }

    int arr2 [row] [col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr2[i] [j]);
        }
    }

    int ans [row] [col];

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
           ans [i] [j]= arr [i] [j] + arr2 [i] [j];
        }
        

    }

     for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
           printf("%d ",ans[i] [j]);
        }
        printf("\n");
        

    }
    return 0;
}