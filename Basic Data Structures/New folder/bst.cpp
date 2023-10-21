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
Node* Input()
{
    Node* root;
    int val;
    cin>>val;
    if(val==-1) root=NULL;
    else root=new Node(val);
    queue<Node*> q;
    if(root !=NULL) q.push(root);

    while(!q.empty())
    {
        Node* parent=q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node* cright;
        Node* cleft;

        if(l==-1)cright=NULL;
        else cright=new Node(r);

        if(r==-1)cleft=NULL;
        else cleft=new Node(l);

        parent->left=cleft;
        parent->right=cright;

        if(parent->left !=NULL) q.push(cleft);
        if(parent->right !=NULL) q.push(cright);

    }
    return root;
}
void print(Node* root)
{
    if(root==NULL) return;
    cout<<root->val<<" ";
    print(root->left);
    print(root->right);
       
}
void Insert(Node* &root,int x)
{
    if(root==NULL) root=new Node(x);
    if(x < root->val)
    {
        if(root->left==NULL)
        {
            root->left=new Node(x);
        }
        else
        {
            Insert(root->left,x);
        }
    }
    else if(x > root->val)
    {
        if(root->right==NULL)
        {
            root->right=new Node(x);
        }
        else
        {
            Insert(root->right,x);
        }
    }
}

int main()
{
    Node* root=Input();
    Insert(root,30);
    print(root);


    return 0;
}