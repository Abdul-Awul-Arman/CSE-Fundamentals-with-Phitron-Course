//pass_by_valu
#include<stdio.h>
int pass_by_valu( int a,int b)
{
    int add=a+b;

    return add;

}
int main()
{
    int add=pass_by_valu(1,2);
    printf("%d",add);
    
    return 0;
}