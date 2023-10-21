#include<stdio.h>
#include<string.h>
int vowals(char s[],int i)
{
    if(s[i]=='\0') return 0;
    int ans=vowals(s,i+1);
    if(s[i]>='A' && s[i]<='Z')
    {
        s[i]=s[i]+32;
    }

    if(s[i]== 'a' || s[i]== 'e' ||s[i]== 'o' ||s[i]== 'u' ||s[i]== 'i')
    {
        return ans+1;

    }
    else
    {
        return ans;
    }

}
int main()
{
    char s[205];
    fgets(s,205,stdin);

    int sum=vowals(s,0);

    printf("%d",sum);


    

    return 0;
}