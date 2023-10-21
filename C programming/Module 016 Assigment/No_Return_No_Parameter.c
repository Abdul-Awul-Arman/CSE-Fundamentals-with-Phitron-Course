#include<stdio.h>
void arr(void)
{
    char string[100];
    scanf("%s",string);

    int cont=0;
    
    for(int i=0;string[i]!='\0';i++)
    {
        cont++;
    }
    printf("%d",cont);
     
}
int main()
{
    arr();
    return 0;
}