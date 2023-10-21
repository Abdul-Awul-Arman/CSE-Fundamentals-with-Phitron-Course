#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    
    bool flag=false;

    stringstream ss;
    string word;

    ss<<s;

    while(ss>>word)
    {
        if(word=="Ratul")
        {
            flag=true;
        }
    }

    (flag==true)? cout<<"YES" : cout<<"NO"<<endl;

    return 0;
}