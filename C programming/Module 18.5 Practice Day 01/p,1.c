#include<stdio.h>
void  I_love_Recursion(int n,int i)
{
    if(i==n+1)
    {
        return;
    }
    printf("I love Recursion\n");

    I_love_Recursion(n,i+1);

}

int main()
{
    int a;
    scanf("%d",&a);
    I_love_Recursion(a,1);
    return 0;
}