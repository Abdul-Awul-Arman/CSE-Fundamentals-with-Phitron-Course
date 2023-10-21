#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector <int> v; type 1;

   
    // vector <int> v2(v);
    int a[]={10,20,30,40,50};
     vector <int> v(a,a+5);

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    return 0;
}