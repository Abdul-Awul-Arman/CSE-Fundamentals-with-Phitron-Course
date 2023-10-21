#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> ForStack;
    list<int> ForQueue;
    stack<int> st;
    queue<int> q;
    int n,m;
    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        st.push(val);
    }

    while(!st.empty())
    {
        ForStack.push_back(st.top());
         st.pop();
    }

    for(int i=0;i<m;i++)
    {
         int val;
         cin>>val;
         q.push(val);
    }

    for(int i=0;i<m;i++)
    {
        ForQueue.push_back(q.front());
        q.pop();
    }
    bool flag=true;

    if(n !=m )
    {
        cout<<"NO"<<endl;
    }
    else if(n==0 && m==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(ForQueue.front() !=ForStack.front())
            {
                flag=false;
                
            }
            ForQueue.pop_front();
            ForStack.pop_front();

        }
        
        (flag==true)? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }

    return 0;
}