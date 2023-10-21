#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    stack<int> st;
    for(int i=0;i<n;i++)
    {
       int val;
       cin>>val;
       st.push(val);
    }

    int m;
    cin>>m;
    queue<int> q;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        q.push(val);
    }

    bool flag=true;

    if(n!=m)
    {
        cout<<"NO"<<endl;
    }    
    else
    {
        while(!st.empty() && !q.empty())
        {
            if(st.top()!=q.front())
            {
                flag=false;
            }
            st.pop();
            q.pop();
        }
        
        (flag==true) ?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }

    return 0;
}