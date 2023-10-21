#include<bits/stdc++.h>
using namespace std;
class MyStack
{
    public:
    vector<int> st;
    int sz=0;
    
    int top()
    {
        return st.back();
    }
    void push(int val)
    {
        sz++;
        st.push_back(val);
    }
    void pop()
    {
        sz--;
        st.pop_back();
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if(sz==0) return true;
        else return false;
    }

};
class  Node
{
    public:
           int val;
           Node* preNode;
           Node* nextNode;

           Node(int val)
           {
               (*this).val=val;
               (*this).preNode=NULL;
               (*this).nextNode=NULL;
           }
};
class MyQueue
{
    public:
        Node* head=NULL;
        Node* tail=NULL;
        int sz=0;

    void push(int val)
    {
        sz++;
        Node* newNode=new Node(val);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
            return;
        }
        tail->nextNode=newNode;
        newNode->preNode=tail;
        tail=newNode;
    }
    void pop()
    {
        sz--;
        Node* deleteNode=head;
        head=head->nextNode;
        if(head==NULL)
        {
            tail=NULL;
            delete deleteNode;
            return;
        }
        head->preNode=NULL;
        delete deleteNode;
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if(sz==0) return true;
        else return false;
    }
          

};
int main()
{
    list<int> ForStack;
    list<int> ForQueue;
    MyStack st;
    MyQueue q;
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