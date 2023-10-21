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

    // int e;
    // scanf("%d",&e);

    // for(int i=0;i<col;i++)
    // {
    //     printf("%d ",arr[e] [i]);
    // }
     
    int x;
    scanf("%d",&x);

    for(int i=0;i<row;i++)
    {
        printf("%d\n",arr[i][x]);
    }

    return 0;
}