#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
           int val;
           Node* nextNode;

           Node(int val)
           {
               (*this).val=val;
               (*this).nextNode=NULL;
           }
};
void Insert_At_Tail(Node* &head,Node* &tail,int val)
{
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }

    tail->nextNode=newNode;
    tail=newNode;
}
void print(Node* head)
{
    while(head !=NULL)
    {
        cout<<head->val<<" ";
        head=head->nextNode;
    }
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;

    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)break;
        Insert_At_Tail(head,tail,val);
    }
    
    for(Node* i=head;i->nextNode !=NULL;i=i->nextNode)
    {
        for(Node* j=i->nextNode;j !=NULL;j=j->nextNode)
        {
            if(i->val>j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
    
    Node* tmp=head;
    while(tmp->nextNode !=NULL)
    {
        if(tmp->val==tmp->nextNode->val)
        {
            tmp->nextNode=tmp->nextNode->nextNode;
        }

        if(tmp->nextNode==NULL)
        {
            break;
        }
         else if(tmp->val != tmp->nextNode->val)
        {
            tmp=tmp->nextNode;
        }
        
    }
    print(head);
    
    return 0;
}