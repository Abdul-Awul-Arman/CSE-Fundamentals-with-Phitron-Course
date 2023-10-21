#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    string s;
    getline(cin,s);

    stringstream ss(s);

    string word;
    int coudt=0;
    while(ss>>word)
    {
        coudt++;
    }
    cout<<coudt<<endl;


    
    return 0;
}