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
Node* input(void)
{
    Node* root;
    int val;
    cin>>val;
    queue<Node*> q;
    if(val==-1) root=NULL;
    else root=new Node(val);

    if(root)q.push(root);

    while(!q.empty())
    {
        Node* f=q.front();
        q.pop();

        int r,l;
        cin>>l>>r;

        Node* cleft;
        Node* cright;
        
        if(l==-1)cleft=NULL;
        else cleft=new Node(l);

        if(r==-1)cright=NULL;
        else cright=new Node(r);

        f->left=cleft;
        f->right=cright;

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }

    return root;
}
void print(Node* root)
{
    queue<Node*> q;
    if(root) q.push(root);

    while(!q.empty())
    {
        Node* f=q.front();
        q.pop();

        cout<<f->val<<" ";

        if(f->left)q.push(f->left);
        if(f->right)q.push(f->right);
    }
}

void InsertInBst(Node* &root,int val)
{
    if(root==NULL) 
    {
        root=new Node(val);
        return;
    }
    if(val<root->val)
    {
        if(root->left==NULL)
        {
            root->left=new Node(val);
        }
        else 
        {
            InsertInBst(root->left,val);
        }
    }
    else
    {
        if(root->right==NULL)
        {
            root->right=new Node(val);
        }
        else 
        {
            InsertInBst(root->right,val);
        }
    }
}
int main()
{
    Node* root=input();
    InsertInBst(root,50);
    InsertInBst(root,56);
    print(root);
    
    return 0;
}