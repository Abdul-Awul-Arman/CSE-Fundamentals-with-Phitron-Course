#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
          int val;
          Node* left;
          Node* right;
     Node(int val)
     {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
     }
};
int Count_Hight(Node* root)
{
    if(root==NULL) return NULL;
    
    int l=Count_Hight(root->left);
    int r=Count_Hight(root->right);
    return max(l,r)+1;
}
int CountLeafNode(Node* root)
{
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL) return 1;
    else 
    {
        int l = CountLeafNode(root->left);
        int r = CountLeafNode(root->right);
        return l + r;
    }
    
}
int con(Node* root)
{
    if(root==NULL) return 0;
    int l=con(root->left);
    int r=con(root->right);
    return (l+r)+1;
}
int main()
{
    Node* root=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* c=new Node(40);
    Node* d=new Node(50);
    Node* e=new Node(60);
    Node* f=new Node(70);
    Node* g=new Node(80);
    Node* h=new Node(90);
    Node* i=new Node(100);

    root->left=a;
    root->right=b;
    a->right=h;
    a->left=c;
    c->right=e;
    b->right=d;
    d->left=f;
    d->right=g;
    h->right=i;


   cout<<Count_Hight(root)<<endl;
    
    
    return 0;
}