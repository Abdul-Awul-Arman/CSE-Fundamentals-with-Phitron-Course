#include<stdio.h>
int main()
{
    // char a[5]="arman";
    
    // for(int i=0;i<5;i++)
    // {
    //     printf("%c\n",a[i]);
    // }

    char a[6]="rahat";

    int sz=sizeof(a)/sizeof(char);
    printf("%d\n",sz);
    
    printf("%s",a);


    return 0;
}