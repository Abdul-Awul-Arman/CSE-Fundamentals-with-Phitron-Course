//pass_by_re
#include<stdio.h>
int pass_by_valu( int *c,int *d)
{
    *d=100;//(change the value using address)

}
int main()
{
    int a=1,b=1000;
    pass_by_valu(&a,&b);
    printf("%d %d",a,b);
    
    return 0;
}