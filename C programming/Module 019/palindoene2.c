#include<stdio.h>
#include<string.h>
int main()
{
    char c[10005];
    scanf("%s",c);

     int flag=0;
    
    int i=0,j=strlen(c)-1;
    while(i<j)
    {
        if(c[i] != c[j])
        {
            flag=1;
            
        }

        i++;
        j--;
    }

    if(flag==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}