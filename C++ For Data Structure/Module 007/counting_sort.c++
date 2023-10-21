#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char c;
    int a[26]={0};
    for(int i=0;i<n;i++)
    {
        cin>>c;
        a[c-97]++;
    }

    for(char i='a';i<='z';i++)
    {
        if(a[i-'a']>0)
        {
           for(int j=0;j<a[i-'a'];j++)
           {
               cout<<i;
           }
        }
    }
    return 0;
}