#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%s",a);
    int con[26]={0};

    for(int i=0;i<strlen(a);i++)
    {
        int val=a[i]-97;

        con[val]++;
    }

    for(int i=0;i<strlen(a);i++)
    {
       int val=a[i]-97;
       if(con[val] !=0)
       printf("%c = %d\n",val+'a',con[val]);
       con[val]=0;
    }

    
    return 0;
}