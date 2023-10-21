#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
           string val;
           Node* preNode;
           Node* nextNode;

           Node(string val)
           {
               (*this).val=val;
               (*this).preNode=NULL;
               (*this).nextNode=NULL;
           }
};
void Insert_at_tail(Node* &head,Node* &tail,string val)
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
void print(Node* tmp)
{
    while(tmp !=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->nextNode;
    }
}
int main()
{
    Node* ohead=NULL;
    Node* tail=NULL;

    while(true)
    {
        string val;
        cin>>val;
        if(val=="end")break;;
        Insert_at_tail(ohead,tail,val);

    }

    Node* head=ohead;

    int n;
    cin>>n;
    while(n--)
    {
        string val;
        cin>>val;
        if(val=="visit")
        {
            Node* tmp=head;
            head=ohead;
            string web;
            cin>>web;
            while(head !=NULL)
            {
                if(head->val==web)
                {
                    cout<<web<<endl;
                    break;
                }
                head=head->nextNode;
            }
            if(head==NULL) 
            {
                cout<<"Not Available"<<endl;
                head=tmp;
            }    
        }
        else if(val=="prev")
        {
            if(head->preNode==NULL)
            {
                cout<<"Not Available"<<endl;
            }
            else
            {
                head=head->preNode;
                cout<<head->val<<endl;
            }
        }
        else if(val=="next")
        {
            if(head->nextNode==NULL)
            {
                cout<<"Not Available"<<endl;
            }
            else
            {
                head=head->nextNode;
                cout<<head->val<<endl;
            }
        }
        
    }

    
    return 0;
}