#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> mp;
    mp["arman"]=20;
    // map<string,int>:: iterator it;

   if(mp.count("arman"))
   {
       cout<<"Yes";
   }
   else
   {
        cout<<"nai"<<endl;
   }
    return 0;
}