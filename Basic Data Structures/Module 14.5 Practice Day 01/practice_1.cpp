#include<bits/stdc++.h>
using namespace std;
class MyStack
{
    public:
    list<int> st;

    void push(int val)
    {
        st.push_back(val);
    }
    void pop()
    {
        st.pop_back();
    }
    int top()
    {
        return st.back();
    }
    int size()
    {
        return st.size();
    }
    bool empty()
    {
        if(size()==0)return true;
        else return false;
    }
};
int main()
{
    MyStack s1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        s1.push(val);
    }

    MyStack s2;
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int val;
        cin>>val;
        s2.push(val);
    }

    bool flag=true;

    if(n!=m)
    {
        cout<<"NO"<<endl;
    }
    else 
    {
        while (!s1.empty() && !s2.empty())
        {
            if(s1.top() !=s2.top())
            {
                flag=false;
            }
            s1.pop();
            s2.pop();
        }
         (flag==true)? cout<<"YES"<<endl : cout<<"NO"<<endl;
        
    }
   
    return 0;
}