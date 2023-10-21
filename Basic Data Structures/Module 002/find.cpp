#include<bits/stdc++.h>
using namespace std;
int main()
{
     vector <int> v={1,3,4,5,6,2,3,5,3,2};

     vector <int> :: iterator it;

     it=find(v.begin(),v.end(),3);

     if(it== v.end()) cout<<"Not Found";
     else cout<<"Found";

     cout<<*it<<endl;

     
    return 0;
}