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
void insert_at_tail(Node* &head,Node* &tail,int val)
{
      Node* newNode=new Node(val);
      if(head==NULL)
      {
        head=newNode;
        tail=newNode;
      }
      tail->nextNode=newNode;
      newNode->preNode=tail;
      tail=newNode;
}
void chack_palindrome(Node* head,Node* tail)
{
    while(head !=NULL)
    {
        if(head->val != tail->val)
        {
            cout<<"NO"<<endl;
            return;
        }
        head=head->nextNode;
        tail=tail->preNode;
    }
    cout<<"YES"<<endl;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;

    while(true)
    {
        int val;
        cin>>val;
        if(val == -1) break;
        insert_at_tail(head,tail,val);
    }

    chack_palindrome(head,tail);
    
    return 0;
}