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
void Insert_At_Any_Position(Node* tmp,int pos,int val)
{
    Node* newNode=new Node(val);
    for(int i=1;i<pos;i++)
    {
        tmp=tmp->nextNode;
    }

    newNode->nextNode=tmp->nextNode;
    tmp->nextNode=newNode;
    newNode->nextNode->preNode=newNode;
    newNode->preNode=tmp;
   
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
void printing_right(Node* tail)
{
    cout<<"R -> ";
    while(tail !=NULL)
    {
        cout<<tail->val<<" ";
        tail=tail->preNode;
    }
}
void printing_left(Node* head)
{
     cout<<"L -> ";
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
            printing_left(head);
            cout << endl;
            printing_right(tail);
            cout<<endl;
        }
        else if (pos == Size(head))
        {
            Insert_At_Tail(head, tail, val);
            printing_left(head);
            cout << endl;
            printing_right(tail);
            cout<<endl;
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
                printing_left(head);
                cout << endl;
                printing_right(tail);
                cout << endl;
            }
        }
       
    }
   
    
    return 0;
}