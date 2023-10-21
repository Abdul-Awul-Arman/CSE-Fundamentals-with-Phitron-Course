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
bool search1(Node* root,int x)
{
    if(root==NULL) return false;
    if(root->val==x) return true;
    if(x<root->val)
    {
        return search1(root->left,x);
    }
    else
    {
        return search1(root->right,x);
    }
}
bool search(Node* root,int x)
{
    if(root==NULL) return false;
    if(root->val==x)return true;
    if(x <root->val)
    {
        return search(root->left,x);
    }
    else 
    {
       return search(root->right,x);
    }
}
int main()
{
    Node* root=input();
    if(search(root,8)==true)cout<<"Yes,Found"<<endl;
    else cout<<"No,Not Found"<<endl;
    
    return 0;
}