#include<stdio.h>
void printn(void)
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        printf("%d",i);
        if(i<n)
        {
            printf(" ");
        }
       
    }

}
int main()
{
    printn();
    return 0;
}