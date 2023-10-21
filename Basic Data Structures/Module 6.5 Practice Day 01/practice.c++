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
    tail=newNode;
}
void printing_linked_list(Node* head)
{
    int cou=0;
    Node* tmp2=head;
    while(tmp2!=NULL)
    {
        cou++;
        tmp2=tmp2->nextNode;
    }

    if(cou%2==1)
    {
        Node* tmp=head;
       for(int i=0;i<(cou/2);i++) //minus 1 ;
       {
            tmp=tmp->nextNode;
       }
       cout<<tmp->val<<endl;
    }
    else
    {
        Node* tmp=head;
       for(int i=0;i<(cou/2)-1;i++) //minus 2;
       {
            tmp=tmp->nextNode;
       }
       cout<<tmp->val<<" ";
       cout<<tmp->nextNode->val<<endl;
    }

    cout<<"Print End"<<endl;

}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;

    while(true)
    {
        int val;
        cout<<endl<<"Give Value"<<endl;
        cin>>val;
        if(val==-1)break;
        insert_at_tail(head,tail,val);

    }
    printing_linked_list(head);
    
    return 0;
}