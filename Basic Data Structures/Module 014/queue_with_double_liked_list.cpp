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
                if(head=NULL)
                {
                    tail==NULL;
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
               if(sz==0)return true;
               else return false;
           }

};
int main()
{
    MyQueue q;
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        q.push(val);
    }

    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    
    return 0;
}