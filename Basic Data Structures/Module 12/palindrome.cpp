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
void reverse(Node* &head,Node* cur)
{
    if(cur->nextNode==NULL)
    {
        head=cur;
        return;
    }
   reverse(head,cur->nextNode);
   cur->nextNode->nextNode=cur;
   cur->nextNode=NULL;
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
    Node* head_2=NULL;
    Node* tail=NULL;
    Node* tail_2=NULL;

    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)break;
        Insert_At_Tail(head,tail,val);
    }
    
    Node* tmp=head;
    while(tmp !=NULL)
    {
        
        Insert_At_Tail(head_2,tail_2,tmp->val);
        tmp=tmp->nextNode;
    }
    reverse(head_2,head_2);
    
    tmp=head;
    Node* tmp_2=head_2;
    bool flag=true;
    while(tmp !=NULL)
    {
        if(tmp->val !=tmp_2->val)
        {
            flag=false;
            break;
        }
        tmp=tmp->nextNode;
        tmp_2=tmp_2->nextNode;
    }
    if(flag==true)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    return 0;
}