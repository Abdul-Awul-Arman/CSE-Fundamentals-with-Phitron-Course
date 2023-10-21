#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char x;

    int a[26]={0};

    for(int i=0;i<n;i++)
    {
        cin>>x;

        a[x-97]++;
    }

    for(int i=0;i<26;i++)
    {
       if(a[i]!=0)
       {
         int l=a[i];
         int u=0;
         while(u<l)
         {
            x=i+97;
            cout<<x;

           u++;
         }

       }
    }


    return 0;
}