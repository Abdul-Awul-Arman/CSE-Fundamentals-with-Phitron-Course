#include<stdio.h>
#include<stdlib.h>
int main()
{
    int row;
    scanf("%d",&row);
    int arr[row] [row];

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            scanf("%d",&arr[i] [j]);
        }
    }
    int primary=0,secondery=0;

     for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            if(i==j)
            {
                primary+=arr[i] [j];
            }
            
        }
    }

     for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            if(i+j==row-1)
            {
                secondery+=arr[i] [j];
            }
            
        }
    }

    int con=primary-secondery;

    int ss=abs(con);

    printf("%d",ss);



    return 0;
}