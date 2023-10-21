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
int print_linked_list(Node* head)
{
    int sum=0;
    while(head!=NULL)
    {
        sum++;
        head=head->nextNode;
    }
    return sum;
}
void input_liked_list(Node* &head,Node*  &tail,int val)
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
int main()
{
    Node* head_1=NULL;
    Node* tail_1=NULL;
    Node* tail_2=NULL;
    Node* head_2=NULL;


    while(true)
    {
        int val;
        cin>>val;
        if(val==-1)break;
        input_liked_list(head_1,tail_1,val);

    }
     while(true)
    {
        int val;
        cin>>val;
        if(val==-1)break;
        input_liked_list(head_2,tail_2,val);

    }
    if(print_linked_list(head_1) == print_linked_list(head_2))
    {
         cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    

    
    return 0;
}