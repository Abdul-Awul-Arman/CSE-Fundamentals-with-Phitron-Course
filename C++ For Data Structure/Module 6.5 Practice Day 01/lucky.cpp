#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   getchar();
   for(int i=0;i<t;i++)
   {
     string s;
    cin>>s;

    int sum1=0,sum2=0;
    for(int i=0;i<3;i++)
    {
        int n=s[i]-48;
        sum1+=n;
    }

    for(int i=3;i<6;i++)
    {
        int n=s[i]-48;
        sum2+=n;
    }
     
     if(sum1==sum2)
     {
        cout<<"YES"<<endl;
     }
     else
     {
        cout<<"NO"<<endl;
     }
   }



    return 0;
}