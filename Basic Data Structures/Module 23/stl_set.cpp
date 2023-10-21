#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> st;
    int n;
    cin>>n;
    
    while(n--)
    {
       int x;
       cin>>x;
       st.insert(x);
    }
    if(st.count(10))
    {
        cout<<"YES";
    }
    else 
    {
        cout<<"NO";
    }
    
    // set<int>:: iterator it;
    // for(it=st.begin();it !=st.end();it++)
    // {
    //     cout<<*it<<" ";
    // }
    return 0;
}