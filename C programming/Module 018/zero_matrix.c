#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int element=row*col;
    int arr[row] [col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i] [j]);
        }
    }
     
    int con=0; 
       for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
           if(arr[i] [j]==0)
           {
             con++;
           }
        }
    }
    
    if(element==con)
    {
        printf("Zero matrix");
    }
    else
    {
        printf("Not Zero Matrix");
    }
    return 0;
}