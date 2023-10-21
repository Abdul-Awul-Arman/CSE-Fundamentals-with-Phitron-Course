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
void Insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        cout<<endl<<"INSERTED AT HEAD"<<endl;
        return;
    }
    newNode->preNode=tail;
    tail->nextNode=newNode;
    tail=newNode;
    cout<<endl<<"INSERTED AT TAIL"<<endl;
}
void printing_next(Node* head)
{
    cout<<endl<<"LINKED LIST PRINTED BELOW"<<endl;
    while(head !=NULL)
    {
        cout<<head->val<<" ";
        head=head->nextNode;
        
    }
    cout<<endl;
}
void printing_pre(Node* tail)
{
    while( tail!=NULL)
    {
        cout<<tail->val<<" ";
        tail=tail->preNode;
    }
    cout<<endl;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    while (true)
    {
        cout<<endl;
        int op;
        cout<<"Option 1: Insert At tail"<<endl;
        cout<<"Option 2: Print Linked List"<<endl;
        cout<<"Option 3: Print Linked List Previous"<<endl;
        cout<<"Option 7: Terminate"<<endl;
        cin>>op;

        if(op==1)
        {
             int val;
            cout<<"Enter Value"<<endl;
            cin>>val;
            Insert_at_tail(head,tail,val);
        }
        else if(op==2)
        {
            printing_next(head);
        }
        else if(op==3)
        {
            printing_pre(tail);
        }
        else if(op==7)break;
    }
    
    
    

    
    return 0;
}