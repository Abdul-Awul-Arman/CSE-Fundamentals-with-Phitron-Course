#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="hellowrold";
    string d="world";

    // s+=d;
    // s.append(d);
    // s.push_back('a');
    // s.pop_back();   
    // cout<<s<<endl;
    
    // s.erase(4,2);
    s.replace(5,0,d);
    // s.insert(5,"arman");
    cout<<s<<endl;
    return 0;
}