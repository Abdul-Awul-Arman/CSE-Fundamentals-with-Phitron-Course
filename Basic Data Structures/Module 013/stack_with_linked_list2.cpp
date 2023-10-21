#include<bits/stdc++.h>
using namespace std;
class Node
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
class MyStack
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
               Node* deleteNode=tail;
               tail=tail->preNode;
               delete deleteNode;
               if(tail==NULL)head=NULL;
               else tail->nextNode=NULL;
           }
           int top()
           {
                return tail->val;
           }
           int size()
           {
            
               return sz;
           }
           bool empty()
           {
               if(size()==0)return true;
               else return false;
           }
};
int main()
{
    MyStack st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        st.push(val);
    }

    st.pop();
    if(!st.empty())cout<<st.top()<<endl;
  

    // while(!st.empty())
    // {
    //     cout<<st.top()<<endl;
    //     st.pop();
    // }    
    return 0;
}