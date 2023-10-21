#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
           int val;
           Node* nextNode;
           Node* preNode;
           Node(int val)
           {
               this->val=val;
               this->nextNode=NULL;
               this->preNode=NULL;
           }
};
void insert_at_tail(Node* &head,Node* &tail,int val)
{
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
void sortLinkedList(Node* head)
{
    for(Node* i=head;i->nextNode !=NULL;i=i->nextNode)
    {
        for(Node* j=i->nextNode;j !=NULL;j=j->nextNode)
        {
            if(i->val<j->val)
            {
                Node* tmp;
                tmp->val=i->val;
                i->val=j->val;
                j->val=tmp->val;
            }
        }
    }
}
void print(Node* head)
{
    while(head !=NULL)
    {
        cout<<head->val<<" ";
        head=head->nextNode;
    }
    cout<<endl;
}
void print_reverse(Node* tail)
{
    while(tail !=NULL)
    {
        cout<<tail->val<<" ";
        tail=tail->preNode;
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
        insert_at_tail(head,tail,val);
    }
    sortLinkedList(head);
    print(head);
    cout<<endl;
    print_reverse(tail);
    
    return 0;
}