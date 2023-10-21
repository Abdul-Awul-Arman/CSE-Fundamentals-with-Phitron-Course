#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int con=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int p;
    scanf("%d",&p);

    for(int i=0;i<n;i++)
    {
        if(arr[i]==p)
        {
            con++;
        }
    }
    printf("%d",con);


    return 0;
}