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
    newNode->preNode=tail;
    tail=newNode;
}
void Insert_At_Head(Node* &head,Node* &tail,int val)
{
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->nextNode=head;
    head->preNode=newNode;
    head=newNode;
}
void Insert_At_Any_Position(Node* head,int pos,int val)
{
    Node* newNode=new Node(val);
    for(int i=1;i<pos;i++)
    {
        head=head->nextNode;
        return;
    }
    newNode->nextNode=head->nextNode;
    head->nextNode->preNode=newNode;
    head->nextNode=newNode;
}
int Size(Node* head)
{
    int sum=0;
    while(head !=NULL)
    {
        sum++;
        head=head->nextNode;
    }

    return sum;
}
void printing_right(Node* head)
{
    while(head !=NULL)
    {
        cout<<head->val<<" ";
        head=head->nextNode;
    }
}
void printing_left(Node* tail)
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
    
    int q;
    cin>>q;
    while(q--)
    {
        int pos;
        cin>>pos;
        int val;
        cin>>val;

        if (pos ==0)
        {
            Insert_At_Head(head,tail,val);
            printing_right(head);
            cout << endl;
            printing_left(tail);
            cout << endl;
        }
        else if (pos == Size(head))
        {
            Insert_At_Tail(head, tail, val);
            printing_right(head);
            cout << endl;
            printing_left(tail);
            cout << endl;
        }
        else
        {
            if(pos>Size(head))
            {
                cout<<"Invalid"<<endl;
        
            }
            else
            {
                Insert_At_Any_Position(head,pos,val);
                printing_right(head);
                cout << endl;
                printing_left(tail);
                cout << endl;
            }
        }
       
    }
   
    
    return 0;
}