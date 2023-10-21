#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);

    string b;
    getline(cin,b);

    int cnt=0;
   
   while(s.find("john") !=-1)
   {
       
        s.replace(s.find("john"),b.size()," ");
        cnt++;
   }
   
    cout<<cnt<<endl;



    return 0;
}