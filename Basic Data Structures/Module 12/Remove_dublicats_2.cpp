#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> dublicat;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)break;
        dublicat.push_back(val);
    }

    dublicat.sort();
    dublicat.unique();
    
    for(int val:dublicat)
    {
        cout<<val<<" ";
    }
    return 0;
}